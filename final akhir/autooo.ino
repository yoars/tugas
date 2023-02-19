
void autoo(int a, float b){
  int rainVal = a;
  float luxVal = b;
  // Serial.println("Hujan = "+String(rainVal)+"      ||      lux = "+luxVal);
  if(rainVal>rainValMax){
    // closeroof
    // servo(currentstate,closeroof);
    
    digitalWrite(closePin,HIGH);
    delay(1000);
    digitalWrite(closePin,LOW);
    currentstate = closeroof;
  }else if(rainVal<rainValMin){
    if(luxVal>luxValMax){
      // openroof
      // servo(currentstate, openroof);
      digitalWrite(openPin,HIGH);
      delay(1000);
      digitalWrite(openPin,LOW);
      currentstate = openroof;
    }else if(luxVal<luxValMin){
      // closeroof
      // servo(currentstate,closeroof);
      digitalWrite(closePin,HIGH);
      delay(1000);
      digitalWrite(closePin,LOW);
      currentstate = closeroof;
    }else{
      // nothing
    }
  }else{
    // nothing
  }
  delay(1000);
}