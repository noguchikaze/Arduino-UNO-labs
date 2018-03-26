 int pushButton = 2;
 int led = 13;

void setup() {
  Serial.begin(9600);
  pinMode(pushButton,INPUT);
  pinMode(led,OUTPUT);
 }
void loop() {
  // put your main code here, to run repeatedly:
  int buttonState = digitalRead(pushButton);
  if(buttonState == HIGH){
    digitalWrite(led,LOW);
    delay(1000);
    digitalWrite(led,HIGH);
    delay(1000);
    Serial.println(buttonState);
  }else{
    digitalWrite(led,LOW);
    Serial.println(buttonState);
  }
}
