int state = 0;
void setup()
{
  pinMode(13, OUTPUT); //REDLED
  pinMode(10, OUTPUT); //YELLOWLED
  pinMode(7, OUTPUT); //GREENLED
  pinMode(4, INPUT_PULLUP); //BUTTON
  pinMode(2, OUTPUT);  //ACTIVEBUZZER
}

void beep()
{
  digitalWrite(2, HIGH);
  delay(3000);
  digitalWrite(2, LOW);
}

void loop()
{
  if (digitalRead(4) == LOW)
  {
    state = 1;
  }
  if (state == 1)
  {
    digitalWrite(13, HIGH);
    delay(12000);
    beep();
    digitalWrite(13, LOW);
    digitalWrite(7, HIGH);
    delay(12000);
    beep();
    digitalWrite(7, LOW);
    digitalWrite(10, HIGH);
    beep();
    digitalWrite(10, LOW);
  }
  else
  {
    digitalWrite(13, !digitalRead(13));
    delay(500);
  }
}
