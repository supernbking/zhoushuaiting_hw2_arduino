#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup()
{
  // put your setup code here, to run once:
  for (int i = 2; i < 8; i++)
    pinMode(i, OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
  for (int i = 2; i < 8; i++)
  {
    digitalWrite(i, HIGH);
    delay(500);
    digitalWrite(i, LOW);
  }
  for (int i = 7; i > 2; i--)
  {
    digitalWrite(i, HIGH);
    delay(500);
    digitalWrite(i, LOW);
  }
}

// put function definitions here:
int myFunction(int x, int y)
{
  return x + y;
}