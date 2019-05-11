const int pir_pin = 2;
const int ldr_pin = A0;
const int led_pin = 13;
int pirState = LOW;
void setup()
{
  pinMode(led_pin, OUTPUT);
  pinMode(ldr_pin, INPUT);
  pinMode(pir_pin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  bool pirStatus = digitalRead(pir_pin);  // read pir
  int ldrStatus = analogRead(ldr_pin); // read ldr
  if (pirStatus == HIGH && ldrStatus <= 700)  // check if the input is HIGH
  {
    digitalWrite(led_pin, HIGH);  // turn LED ON
    Serial.println("Motion: TRUE / Brightness: LOW / LED: ON");
    delay(5000);

  }
  else if (pirStatus == HIGH && ldrStatus > 700)
  {
    digitalWrite(led_pin, LOW);  // turn LED OFF
    Serial.println("Motion: TRUE / Brightness: HIGH / LED: OFF");
  }
  else if (pirStatus == LOW && ldrStatus <= 700)
  {
    digitalWrite(led_pin, LOW);  // turn LED OFF
    Serial.println("Motion: FALSE / Brightness: LOW / LED: OFF");
  }
  else if (pirStatus == LOW && ldrStatus > 700)
  {
    digitalWrite(led_pin, LOW);  // turn LED OFF
    Serial.println("Motion: FALSE / Brightness: HIGH / LED: OFF");
  }
}
