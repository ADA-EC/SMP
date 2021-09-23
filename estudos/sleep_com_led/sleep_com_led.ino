#include <avr/sleep.h>

const int interrupcao = 2;
const int botao = 13;     
const int led =  3;

void setup() {
  // put your setup code here, to run once:
  // Define o pino 2 como entrada e ativa o resistor de pull-up
    pinMode(botao, INPUT_PULLUP);
    pinMode(interrupcao, INPUT_PULLUP);

    // Define o LED como saida
    pinMode(led, OUTPUT);

}
void loop() {
  // Código do blink
  digitalWrite(led, HIGH);
  delay(2000);
  digitalWrite(led, LOW);
  //delay(1000);

  // Manda o Arduino dormir
  dormir();
}

void acordar(){
    // Desabilita o sleep
  sleep_disable();

  // Desabilita a interrupção
  detachInterrupt(0); 
}

void dormir(){
   set_sleep_mode(SLEEP_MODE_PWR_DOWN);
   sleep_enable();
   attachInterrupt(digitalPinToInterrupt(interrupcao), acordar, LOW);
   sleep_cpu();
}
