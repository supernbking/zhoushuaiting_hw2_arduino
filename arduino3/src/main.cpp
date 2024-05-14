#include <Arduino.h>

#include <LiquidCrystal.h>//声明调用库
 
const int rs=12,en=11,d4=5,d5=4,d6=3,d7=2;//对应引脚
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);//创建一个名为lcd的实例（对象），这里是4线法d4~d7
void setup() {
  lcd.begin(16,2);//初始化LCD的宽度和高度,设置16列2行
  lcd.print("Hello,world!");//向LCD输出内容
}
 
void loop() {
  lcd.setCursor(0,1);//把光标设置在0列1行(第2行开头)上
  lcd.print(millis()/1000);//把系统运行的时间打到屏幕上
}