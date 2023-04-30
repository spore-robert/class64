void servoAction(String strJson)
{
  
    deserializeJson(doc,strJson);
    int theta = doc["servo"];
    Serial.print("theta:");
    Serial.println(theta);
    svo.write(theta);
  
}

void serialRead()
{
  String s="";
  while(Serial.available())
  {
    char c = Serial.read();
    if(c !='\r' || c != '\n')
    {
      s = s + c;
      Serial.println(s);
    }
    delay(5);
    
  } 
  
  if(s !="")
  {
    Serial.println(s);
    servoAction(s);

      
  } 
  
  
  
}


void test(){
  
 
}
