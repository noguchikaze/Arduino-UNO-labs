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
    if (buttonState == LOW) {
      //showSevenSeg(0,1,1,1,1,1,1,1);
       // turn LED A of 7-segment on.
       delay(500);
       showSevenSeg(1,0,0,0,0,0,0,0);
       delay(500);
       showSevenSeg(0,1,0,0,0,0,0,0);
       delay(500);
       showSevenSeg(0,0,1,0,0,0,0,0);
       delay(500);
       showSevenSeg(0,0,0,1,0,0,0,0);
       delay(500);
       showSevenSeg(0,0,0,0,1,0,0,0);
       delay(500);
       showSevenSeg(0,0,0,0,0,1,0,0);
       delay(500);
       showSevenSeg(0,0,0,0,0,0,1,0);
       delay(500);
       showSevenSeg(0,0,0,0,0,0,0,1);
       delay(500);       
         }
    else {
      showSevenSeg(0,0,0,0,0,0,0,0); // turn all LEDs of 7-segment on.
         }
    }
