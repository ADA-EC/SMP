#include <Wire.h> 
#include <RtcDS3231.h>
RtcDS3231<TwoWire> Rtc(Wire);

// o Pino SQW deve ser ligado ao pino 2 no UNO. Isso varia de placa para placa
#define led_pin 13
#define sqw_pin 2 // UNO. No Mega, mude para 19
#define int_number 0 // UNO. No Mega, mude para 4

volatile bool int_flag = false; // Variável que indica se houve interrupção
bool ledVal = true;
void interrompeu(){ // Rotina chamada quando houver uma interrupção
  int_flag = true;

  if(ledVal){
    digitalWrite(led_pin, HIGH);
  }else{
    digitalWrite(led_pin, LOW);
  }
  ledVal = !ledVal;
  

//  DS3231AlarmFlag flag = Rtc.LatchAlarmsTriggeredFlags(); //Variável para testar qual alarme disparou
//  if(flag & DS3231AlarmFlag_Alarm1){
//    Serial.println(">>> Interrupção Alarme 1 <<<");
//  }else if(flag & DS3231AlarmFlag_Alarm2){
//    Serial.println(">>> Interrupção Alarme 2 <<<");
//  }
}

void setup(){
  Serial.begin(9600);

  // Pullup no pino de interrupção
  pinMode(sqw_pin, INPUT_PULLUP);
  pinMode(led_pin, OUTPUT);

  // Configuração inicial do RTC
  Rtc.Begin();
  RtcDateTime compiled = RtcDateTime(__DATE__, __TIME__);
  if(!Rtc.IsDateTimeValid()){
    Rtc.SetDateTime(compiled);
  }
  if(!Rtc.GetIsRunning()){
    Rtc.SetIsRunning(true);
  }
  RtcDateTime now = Rtc.GetDateTime();
  if(now < compiled){
    Rtc.SetDateTime(compiled);
  }
  Rtc.Enable32kHzPin(false);
  Rtc.SetSquareWavePin(DS3231SquareWavePin_ModeAlarmBoth); //Habilta 2 alarmes

  // Alarme1 daqui a 30 segundos
//  RtcDateTime alarmTime = now + 30;
  DS3231AlarmOne alarm1(
    0,
    0,
    0,
    30,
    DS3231AlarmOneControl_OncePerSecond);
  Rtc.SetAlarmOne(alarm1);

  // Alarm 2 a cada 1 minuto
//  DS3231AlarmTwo alarm2(
//    0,
//    0,
//    0,
//    DS3231AlarmTwoControl_OncePerMinute);
//  Rtc.SetAlarmTwo(alarm2);

  // Efetiva os alarmes
  Rtc.LatchAlarmsTriggeredFlags();

  // Configura interrupção
  attachInterrupt(int_number, interrompeu, FALLING);
}

void loop(){
  RtcDateTime now = Rtc.GetDateTime();
  Serial.print(formatDate(now,"d/m/y") + " ");
  Serial.println(formatTime(now,"h:m:s"));

  if(int_flag){
    int_flag = false; // Reseta flag
    DS3231AlarmFlag flag = Rtc.LatchAlarmsTriggeredFlags(); //Variável para testar qual alarme disparou
    if (flag & DS3231AlarmFlag_Alarm1){
      Serial.println(">>> Alarme 1 disparou <<<");
    }else if(flag & DS3231AlarmFlag_Alarm2){
      Serial.println(">>> Alarme 2 disparou <<<");
    }
  }
  delay(1000);
}

// Funções para formatação dos dados
String formatDate(const RtcDateTime& dt, String format){
  String d = dt.Day() < 10 ? "0" + String(dt.Day()) : String(dt.Day()) ; 
  String m = dt.Month() < 10 ? "0" + String(dt.Month()) : String(dt.Month()) ;
  String y = String(dt.Year()) ;
  format.replace("d",d);
  format.replace("m",m);
  format.replace("y",y);
  return format;
}
String formatTime(const RtcDateTime& dt, String format){
  String h = dt.Hour() < 10 ? "0" + String(dt.Hour()) : String(dt.Hour()) ;
  String m = dt.Minute() < 10 ? "0" + String(dt.Minute()) : String(dt.Minute()) ;
  String s = dt.Second() < 10 ? "0" + String(dt.Second()) : String(dt.Second()) ;
  format.replace("h",h);
  format.replace("m",m);
  format.replace("s",s);
  return format;
}
