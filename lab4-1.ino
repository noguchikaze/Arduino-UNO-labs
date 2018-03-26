byte pinA=13, pinB=12, pinC=11, pinD=10, pinE=9, pinF=8, pinG=7, pinP=6;
byte pushButton = 2;
void setup() {
   pinMode(pinA, OUTPUT);   pinMode(pinB, OUTPUT);
   pinMode(pinC, OUTPUT);   pinMode(pinD, OUTPUT);
   pinMode(pinE, OUTPUT);   pinMode(pinF, OUTPUT);
   pinMode(pinG, OUTPUT);   pinMode(pinP, OUTPUT);
   pinMode(pushButton, INPUT);
}
// show the specified LEDs of 7-segment
void showSevenSeg(byte A, byte B, byte C, byte D, byte E, byte F, byte G, byte P) {
    digitalWrite(pinA, A);   digitalWrite(pinB, B);   digitalWrite(pinC, C);
    digitalWrite(pinD, D);   digitalWrite(pinE, E);   digitalWrite(pinF, F);
    digitalWrite(pinG, G);   digitalWrite(pinP, P);
   }
void loop() {
 // read the input pin:
    int buttonState = digitalRead(pushButton);
    if (buttonState == HIGH) {
      //showSevenSeg(0,1,1,1,1,1,1,1);
       // turn LED A of 7-segment on.
       showSevenSeg(1,1,1,1,1,1,1,1);//X
       delay(500);
       showSevenSeg(0,0,0,0,0,0,1,1);//0
       delay(500);
       showSevenSeg(0,1,0,0,1,0,0,1);//5
       delay(500);
       showSevenSeg(1,0,0,1,1,1,1,1);//1
       delay(500);
       showSevenSeg(0,0,0,0,0,0,1,1);//0
       delay(500);
       showSevenSeg(0,0,0,1,1,1,1,1);//7
       delay(500);
       showSevenSeg(1,0,0,1,1,0,0,1);//4
       delay(500);
       showSevenSeg(0,0,0,0,1,1,0,1);//3
       delay(500);
         }
    else {
      showSevenSeg(0,1,1,1,1,1,1,1);
      delay(500);
      showSevenSeg(1,0,1,1,1,1,1,1);
      delay(500);
      showSevenSeg(1,1,0,1,1,1,1,1);
      delay(500);
      showSevenSeg(1,1,1,0,1,1,1,1);
      delay(500);
      showSevenSeg(1,1,1,1,0,1,1,1);
      delay(500);
      showSevenSeg(1,1,1,1,1,0,1,1);
      delay(500);

         }
    }
