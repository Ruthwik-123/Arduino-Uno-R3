// C++ code
//
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  digitalWrite(2, HIGH);
  delay(5000);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  delay(2000);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  delay(4000);
  digitalWrite(4, LOW);
  delay(1); // Delay a little bit to improve simulation performance
}