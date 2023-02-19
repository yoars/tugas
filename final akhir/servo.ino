int servo(int start,int end){//min 7, max 32
    Serial.println(start+String("       "+String(end)));
  // Serial.println()
  if (start<end){
    for(dutyCycle = start; dutyCycle <= end; dutyCycle++)
    {
      ledcWrite(PWMChannel, dutyCycle);
      delay(70);
    }
  }else if(start>end){
    for(dutyCycle = start; dutyCycle >= end; dutyCycle--)
    {
      ledcWrite(PWMChannel, dutyCycle);
      delay(70);
    }
  }else{
    // nothing
  }
}