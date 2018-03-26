int analog_in = 1;  //讀取類比輸入
float V; //電壓
void setup()
{
  Serial.begin(9600);
}
void loop()
{
  V = (analogRead(analog_in)*5)/1024.0;
  Serial.println(V);
}
