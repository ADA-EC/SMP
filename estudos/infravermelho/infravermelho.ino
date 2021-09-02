#include <IRremote.h> //inclusão da biblioteca

int RECV_PIN = 2; //pino do receptor infravermelho

IRrecv irrecv(RECV_PIN); //passando o pino como parâmetro do irrecv

decode_results results; //variável que armazena o sinal IR recebido

long int power = 16580863; //código decimal do power
long int pause = 16621663; //código decimal do pause
const int ledVermelho = 7; //pino do led

void setup(){
  pinMode(ledVermelho, OUTPUT); //define o led como saída
  Serial.begin(9600); //inicializa a serial
  irrecv.enableIRIn(); //inicializa a recepção de sinal IR
}

void loop(){
  
  if (irrecv.decode(&results)){
    if(results.value == power && digitalRead(ledVermelho)==LOW){
      Serial.println("apertou o power");
      digitalWrite(ledVermelho, HIGH);
    }
    if(results.value == pause && digitalRead(ledVermelho)==HIGH){
      Serial.println("apertou o pause");
      digitalWrite(ledVermelho, LOW);
    }
    irrecv.resume(); //aguarda o recebimento de um novo sinal ir
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
