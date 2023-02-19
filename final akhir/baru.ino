// // DEKLARASI PIN
// const int dirPin  = 2;  //CW+
// const int stepPin = 3; //CLK+
// const int enPin   = 4; //EN+

// const int button1     = 8; //kanan
// const int button2     = 9; //kiri

// int p1buttonState = 0;         // KONDISI BUTTON
// int lastp1buttonState = 0;     // KONDISI BUTTON SEBELUMNYA
// int p2buttonState = 0;         // KONDISI BUTTON
// int lastp2buttonState = 0;     // KONDISI BUTTON SEBELUMNYA
// bool bPress = false;

// bool isForward = false;
// bool isBackward = false;

// int buzzer = 2;

// void setup() {
//   Serial.begin(9600);                 //initial serial monitor
//   pinMode( button1, INPUT_PULLUP);    //button1 sebagai input
//   pinMode( button2, INPUT_PULLUP);    //button2 sebagai input

//   pinMode(stepPin,OUTPUT);      //step pin sebagai output
//   pinMode(dirPin,OUTPUT);       //dirpin sebagai output
//   pinMode(enPin,OUTPUT);        //enpin sebagai output
//   digitalWrite(enPin,LOW);      //inisialisasi enpin ber-logic low

//   pinMode(buzzer, OUTPUT);
//   digitalWrite(buzzer, HIGH);
//   delay(10);
// }

// void loop() {
//  isForward = false;
//  isBackward = false;
//   p1buttonState = digitalRead(button1); //membaca input button1
//   p2buttonState = digitalRead(button2); //membaca input button2

//   if (p1ButtonPress()) {        //jika button1 ditekan
//     digitalWrite(dirPin,HIGH);  //maka dirpin ber-logic high
//     delay(5);                   //dengan jeda 5ms

//   }
//   if (p2ButtonPress()) {        //jika button2 ditekan
//     digitalWrite(dirPin,LOW);   //maka dirpin ber-logic low
//     delay(5);                   //dengan jeda 5ms
//   }
  
//   if( isForward || isBackward ){
//     for(int x = 0; x < 1600; x++) {
//       digitalWrite(stepPin,HIGH);
//       delayMicroseconds(1000);
//       digitalWrite(stepPin,LOW);
//       delayMicroseconds(1000);
//     }
//   }
// }

// bool p1ButtonPress(){
//   bool isPress = false;
//   if (p1buttonState != lastp1buttonState) {
//   if (p1buttonState == LOW) {
//   bPress = true;
//   isPress = true;
//   Serial.println("Plaer One score");
//   } 
    
//   else {
//     Serial.println("off");
//     isForward = true;
//   }
//     delay(50);
//   }
//   lastp1buttonState = p1buttonState;
//   return isPress;
// }

// bool p2ButtonPress()
// {
//    bool isPress = false;
//   if (p2buttonState != lastp2buttonState) {
//     if (p2buttonState == LOW) {
//       bPress = true;
//       isPress = true;
//       Serial.println("Plaer Two score");
//     } else {
//       Serial.println("off");
//       isBackward = true;
//     }
//     delay(50);
//   }

//   lastp2buttonState = p2buttonState;
//   return isPress;

// }

