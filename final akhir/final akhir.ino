#include <Wire.h>
#include <BH1750.h>
#include "ilyasstd.h"

// void IRAM_ATTR handleInterrupt(){
//   noInterrupts();
//   // buttonCount++;
//   interrupts();
// }

void setup() {
  Serial.begin(115200);
  Wire.begin();
  lightMeter.begin();
  pinMode(led,OUTPUT);
  pinMode(openPin,OUTPUT);
  pinMode(closePin,OUTPUT);
  pinMode(32,INPUT_PULLUP);
  pinMode(33,INPUT_PULLUP);
  pinMode(rain_sensor,INPUT);
  // attachInterrupt(interruptPin,handleInterrupt,CHANGE);
  ledcSetup(PWMChannel, PWMFreq, PWMResolution);
  ledcAttachPin(servoPin, PWMChannel);
  ledcWrite(PWMChannel, dutyCycle);
  Blynk.begin(auth, ssid, pass);
  timer.setInterval(500L, sendLux);
  delay(2000);
  pinMode(stepPin,OUTPUT);      //step pin sebagai output
  pinMode(dirPin,OUTPUT);       //dirpin sebagai output
  pinMode(enPin,OUTPUT);        //enpin sebagai output
  digitalWrite(enPin,LOW);      //inisialisasi enpin ber-logic low

  pinMode(buzzer, OUTPUT);
  digitalWrite(buzzer, HIGH);
  delay(10);
}

void loop() {
  Blynk.run();
  timer.run();
  
 

}

bool p1ButtonPress(){
  bool isPress = false;
  if (p1buttonState != lastp1buttonState) {
  if (p1buttonState == LOW) {
  bPress = true;
  isPress = true;
  Serial.println("Plaer One score");
  } 
    
  else {
    Serial.println("off");
    isForward = true;
  }
    delay(50);
  }
  lastp1buttonState = p1buttonState;
  return isPress;
}

bool p2ButtonPress()
{
   bool isPress = false;
  if (p2buttonState != lastp2buttonState) {
    if (p2buttonState == LOW) {
      bPress = true;
      isPress = true;
      Serial.println("Plaer Two score");
    } else {
      Serial.println("off");
      isBackward = true;
    }
    delay(50);
  }

  lastp2buttonState = p2buttonState;
  return isPress;

}

