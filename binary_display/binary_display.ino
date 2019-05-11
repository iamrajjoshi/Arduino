void setup()
{
  for (int i = 2; i <= 9 ; i++)
    pinMode(i, OUTPUT);
  Serial.begin(9600);
}
/*
  void loop()
  {
  for(byte i=0;i<255;i++)
  {
    byte a=i%2;
    byte b=i/2 %2;
    byte c=i/4 %2;
    byte d=i/8 %2;
    byte e=i/16 %2;
    byte f=i/32 %2;
    byte g=i/64 %2;
    byte h=i/128 %2;
    digitalWrite(2,a);
  digitalWrite(3,b);
  digitalWrite(4,c);
  digitalWrite(5,d);
  digitalWrite(6,e);
  digitalWrite(7,f);
  digitalWrite(8,g);
  digitalWrite(9,h);

   delay(200);
  }
  }*/

void loop()
{
  while (Serial.available() == 0);

int i = Serial.parseInt(); //read int or parseFloat for ..float...
  byte a = i % 2;
  byte b = i / 2 % 2;
  byte c = i / 4 % 2;
  byte d = i / 8 % 2;
  byte e = i / 16 % 2;
  byte f = i / 32 % 2;
  byte g = i / 64 % 2;
  byte h = i / 128 % 2;
  digitalWrite(2, a);
  digitalWrite(3, b);
  digitalWrite(4, c);
  digitalWrite(5, d);
  digitalWrite(6, e);
  digitalWrite(7, f);
  digitalWrite(8, g);
  digitalWrite(9, h);

  delay(3000);
}
