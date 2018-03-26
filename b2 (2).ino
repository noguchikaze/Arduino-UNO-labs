//按一次亮一個LED
int LED1 = 13;
int LED2 = 12;
int LED3 = 11;
int button = 2;
int i = 0;
void LEDS(int a, int b, int c)
{
  digitalWrite(LED1,a); digitalWrite(LED2,b); digitalWrite(LED3,c);
}
void  ret(int i)
{
  if( i == 0 || i == 6)
  { LEDS(0,0,0); }
  else if( i == 1 ||i == 5)
  { LEDS(1,0,0); }
  else if( i == 2 ||i == 4)
  { LEDS(1,1,0); }
  else if( i == 3 )
  { LEDS(1,1,1); }
}
void setup()
{
  pinMode(button,INPUT);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
}

void loop()
{
  if(button == HIGH)
  {
    if(i < 6)
      i++;
    else
      i = 0;
    ret(i);
  }
  else
    ret(i);

}
