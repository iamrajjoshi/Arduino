int first = 3;
int second = 4;
int third = 5;
int fourth = 6;
int fifth = 7;
int sixth = 8;
int two = 2;
int nine = 9;
int button = 10;
int pressed = 0;

void setup()
{
  for (int i = first; i <= sixth; i++)
    pinMode(i, OUTPUT);
  pinMode(button, INPUT);
  randomSeed(analogRead(0)); // initialize random seed by noise from analog pin 0 (should be unconnected)
}

void buildUpTension()
{
  // left to right
  for (int i = 0; i < 3; i++)
  {
    for (int i = two; i <= nine; i++)
    {
      if (i != two)
        digitalWrite(i - 1, LOW);
      digitalWrite(i, HIGH);
      delay(100);
    }
    // right to left
    for (int i = nine; i >= two; i--)
    {
      if (i != nine)
        digitalWrite(i + 1, LOW);
      digitalWrite(i, HIGH);
      delay(100);
    }
  }
}

void showNumber(int number)
{
  digitalWrite(first, HIGH);
  if (number >= 2)
    digitalWrite(second, HIGH);
  if (number >= 3)
    digitalWrite(third, HIGH);
  if (number >= 4)
    digitalWrite(fourth, HIGH);
  if (number >= 5)
    digitalWrite(fifth, HIGH);
  if (number == 6)
    digitalWrite(sixth, HIGH);
}

int throwDice()
{
  int randNumber = random(1, 7);
  return randNumber;
}

void setAllLEDs(int value)
{
  for (int i = first; i <= sixth; i++)
    digitalWrite(i, value);
}

void loop()
{
  pressed = digitalRead(button);
  if (pressed == HIGH)
  {
    setAllLEDs(LOW);
    buildUpTension();
    digitalWrite(two, LOW);
    int thrownNumber = throwDice();
    showNumber(thrownNumber);
    delay(5000);
    setAllLEDs(LOW);
  }
}
