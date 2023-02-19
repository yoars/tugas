void sendLux()
{
  int rainValMain = hujan();
  float luxValMain = lumen();
  Blynk.virtualWrite(V1, luxValMain); 
  Blynk.virtualWrite(V2, rainValMain); 
  if(controllerState==true){
    autoo(rainValMain, luxValMain);
  }else{
    Serial.println("manualllop");
  }
  
  Serial.println(String(digitalRead(32))+"    "+String(digitalRead(33)));
  isForward = false;
  isBackward = false;
  p1buttonState = bridgeButton ; //membaca input button1
  p2buttonState = bridgeButton2 ; //membaca input button2
  if (p1ButtonPress()) {        //jika button1 ditekan
  Serial.println("maju");
    digitalWrite(dirPin,HIGH);  //maka dirpin ber-logic high
    delay(5);                   //dengan jeda 5ms

  }
  if (p2ButtonPress()) {        //jika button1 ditekan
  Serial.println("mundur");       //jika button2 ditekan
    digitalWrite(dirPin,LOW);   //maka dirpin ber-logic low
    delay(5);                   //dengan jeda 5ms
  }
  
  if( isForward || isBackward ){
    for(int x = 0; x < 3500; x++) {
      if(digitalRead(32)==0 || digitalRead(33)==0){
        return     ;   
      }
      Serial.println(x);
      digitalWrite(stepPin,HIGH);
      delayMicroseconds(1000);
      digitalWrite(stepPin,LOW);
      delayMicroseconds(1000);
    }
  }
  
  bridgeButton = 0;
  bridgeButton2 = 0;
}