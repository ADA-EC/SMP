#include <IRremote.h> //biblioteca do infravermelho
#include <avr/sleep.h> //biblioteca do sleep

///////////////////////Explicação do cógigo/////////////
/*
- Botão de Power: funciona como a interrupção. 
Ou seja faz o arduino dormir ou acordar.
- Botão 1: Liga o Led!
- Botão 2: Desliga o Led!
*/

int RECV_PIN = 2; //pino do receptor infravermelho

IRrecv irrecv(RECV_PIN); //passando o pino como parâmetro do irrecv

decode_results results; //variável que armazena o sinal IR recebido

long int power = 16580863; //código decimal do power
long int tecla1 = 16582903; //código decimal tecla1
long int tecla2 = 16615543; //código decimal tecla2

const int ledVermelho = 7; //pino do led
const int ledVerde = 8; //pino do led
int taDormindo = 0; //1: arduino dormindo //0: arduino acordado

void setup(){
  pinMode(ledVermelho, OUTPUT); //define o led como saída
  Serial.begin(9600); //inicializa a serial
  irrecv.enableIRIn(); //inicializa a recepção de sinal IR
}

void loop(){
    if(taDormindo == 1){
      digitalWrite(ledVerde, LOW);
        if (irrecv.decode(&results)){
          if(results.value == power){
              Serial.println("apertou o power");
              acordar();
          }
          irrecv.resume(); //aguarda o recebimento de um novo sinal ir
        }
    }
    if(taDormindo == 0){
        digitalWrite(ledVerde, HIGH);
        if (irrecv.decode(&results)){
          if(results.value == power){
              Serial.println("apertou o power");
              dormir();
          }  
          if(results.value == tecla1){
              Serial.println("apertou tecla 1");
              digitalWrite(ledVermelho, HIGH);
          }
          if(results.value == tecla2){
              Serial.println("apertou tecla 2");
              digitalWrite(ledVermelho, LOW);
          }
          irrecv.resume();
        }
    } 
    
  
  /*
  //CAPTURA O SINAL IR
  if (irrecv.decode(&results)) {
    Serial.print("Codigo HEX: "); //IMPRIME O TEXTO NO MONITOR SERIAL
    Serial.println(results.value, HEX); //IMPRIME NO MONITOR SERIAL O CÓDIGO IR EM FORMATO HEXADECIMAL
    Serial.print("Codigo DEC: "); //IMPRIME O TEXTO NO MONITOR SERIAL
    Serial.println(results.value); //IMPRIME NO MONITOR SERIAL O CÓDIGO IR EM FORMATO DECIMAL
    Serial.println(""); //QUEBRA DE LINHA NA SERIAL
    irrecv.resume(); //AGUARDA O RECEBIMENTO DE UM NOVO SINAL IR
  }*/
  delay(100); //intervalo de 10 milisegundos
}

void acordar(){
  taDormindo = 0; //acordou
  sleep_disable();
  detachInterrupt(0);
  Serial.println("acordou");
}

void dormir(){
  Serial.println("entrou no dormir");
  taDormindo = 1; //dormiu
  set_sleep_mode(SLEEP_MODE_PWR_DOWN);
  sleep_enable();
  attachInterrupt(digitalPinToInterrupt(RECV_PIN), acordar, LOW);
  Serial.println("dormiu");
  delay(100);
  sleep_cpu();
  Serial.println("passou do sleep");
}
