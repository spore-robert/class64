
#include <ArduinoJson.h>
#include<Servo.h>
StaticJsonDocument<200> doc;
int a;
Servo svo;
void setup() {
  // put your setup code here, to run once:
  /*
    {"servo":50}
  */
  svo.attach(7);
  Serial.begin(9600);

  char * json="{\"servo\":\"50\"}";
  
  char test[1]={};
  
  
}

void loop() {
  // put your main code here, to run repeatedly:
  serialRead();
  delay(50);

}
