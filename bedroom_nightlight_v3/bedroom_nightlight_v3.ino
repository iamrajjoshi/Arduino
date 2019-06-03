const int leftSensor = 12;
const int rightSensor = 9;
const int leftLED = 11;
const int rightLED = 10;

void setup()
{
  pinMode(leftSensor, INPUT);
  pinMode(rightSensor, INPUT);
  pinMode(leftLED, OUTPUT);
  pinMode(rightLED, OUTPUT);
  Serial.begin(300);
}

void loop()
{
  bool pirStatusLeft = digitalRead(leftSensor);
  bool pirStatusRight = digitalRead(rightSensor);

  digitalWrite(leftLED, LOW);
  digitalWrite(rightLED, LOW);

  if ((pirStatusLeft == HIGH || pirStatusRight == HIGH )) {
    Serial.print(pirStatusLeft);
    digitalWrite(leftLED, HIGH);
    digitalWrite(rightLED, HIGH);
    delay(7000);
  }
}
