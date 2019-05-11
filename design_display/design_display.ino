int del = 100; // sets a default delay time
void setup()
{
  for (int i = 2; i <= 9 ; i++)
    pinMode(i, OUTPUT);
}

void loop()
{
  for (int i = 2; i <= 9; i++)
  {
    digitalWrite(i, HIGH);
    delay(del);
    digitalWrite(i, LOW);
  }

  for (int i = 9; i >= 3; i--)
  {
    digitalWrite(i, HIGH);
    delay(del);
    digitalWrite(i, LOW);
  }

  for (int i = 0; i < 4; i++)
  {
    digitalWrite(5 - i, HIGH);
    digitalWrite(6 + i, HIGH);
    delay(del);
    digitalWrite(5 - i, LOW);
    digitalWrite(6 + i, LOW);
  }

  for (int i = 2; i >= -3; i--)
  {
    if (i == 0)
      continue;
    digitalWrite(5 - i, HIGH);
    digitalWrite(6 + i, HIGH);
    delay(del);
    digitalWrite(5 - i, LOW);
    digitalWrite(6 + i, LOW);
  }
}
