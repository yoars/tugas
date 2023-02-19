int hujan(){
  int rainAnalogVal = analogRead(rain_sensor);
  int percentage = map(rainAnalogVal,1500,4095,100,0);
  // Serial.println(percentage);
  return percentage;
}