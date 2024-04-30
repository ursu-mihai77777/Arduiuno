// C++ code
//
void setup()
{
  pinMode(9, INPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  if (digitalRead(9) == HIGH) {
    digitalWrite(11, HIGH);
    delay(2000); // Wait for 2000 millisecond(s)
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
    delay(2000); // Wait for 2000 millisecond(s)
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
    delay(2000); // Wait for 2000 millisecond(s)
    digitalWrite(13, LOW);
  }
}