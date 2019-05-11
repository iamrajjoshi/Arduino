const int pir1 = 13;
const int pir2 = 3;
const int led1 = 11;
const int led2 = 10;
const int led3 = 9;
const int led4 = 8;
const int in = 4;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(pir1, INPUT);
  pinMode(pir2, INPUT);
  pinMode(in, INPUT);
  Serial.begin(9600);
}

void loop()
{
  bool pirStatus1 = digitalRead(pir1);  // read pir pin 2
  bool pirStatus2 = digitalRead(pir2); //read pir pin 3
  bool input = digitalRead(in);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  if ((pirStatus1 == HIGH || pirStatus2 == HIGH ) && input == HIGH)  // check if the input is HIGH
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);

    //Serial.println("Motion: TRUE1 / Brightness: LOW / LED: ON");
    delay(5000);

  }
}
