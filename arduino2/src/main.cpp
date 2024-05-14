#include <Arduino.h>

#define LED1_PIN 2
#define LED2_PIN 3
#define LED3_PIN 4

void setup()
{
  Serial.begin(9600);
  pinMode(LED1_PIN, OUTPUT);
  pinMode(LED2_PIN, OUTPUT);
  pinMode(LED3_PIN, OUTPUT);
}

void loop()
{
  if (Serial.available() > 0)
  {
    char zhiling = Serial.read(); // 读取串口发送的字符串指令

    if (zhiling == '1')
    {
      digitalWrite(LED1_PIN, !digitalRead(LED1_PIN));
      if (digitalRead(LED1_PIN))
      {
        Serial.println("LED1亮");
      }
      else
      {
        Serial.println("LED1灭");
      }
    }
    else if (zhiling == '2')
    {
      digitalWrite(LED2_PIN, !digitalRead(LED2_PIN));
      if (digitalRead(LED2_PIN))
      {
        Serial.println("LED2亮");
      }
      else
      {
        Serial.println("LED2灭");
      }
    }
    else if (zhiling == '3')
    {
      digitalWrite(LED3_PIN, !digitalRead(LED3_PIN));
      if (digitalRead(LED3_PIN))
      {
        Serial.println("LED3亮");
      }
      else
      {
        Serial.println("LED3灭");
      }
    }
  }
}