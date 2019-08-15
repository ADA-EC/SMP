#define TAM_LUZ 10
#define LUZ_MIN 600
void setup() {
  pinMode(7, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if(verifica_luminosidade()){
     tone(3,447,100);
     digitalWrite(7,HIGH);
     delay(10000);
     digitalWrite(7,LOW);
  }
  delay(200);
}

int verifica_luminosidade(){
  float media1 = 0; 
  for(int y = 0; y<5;y++){
    for(int x = 0; x<TAM_LUZ;x++){
       media1 += analogRead(A0);
       delay(50);
    }
    media1/=TAM_LUZ;
    if(media1 < LUZ_MIN)
      return 0;
    delay(100);
  }
  return 1;
}
