#include <LiquidCrystal.h>
#include <Arduino.h>

const int rs=8,en=9,d4=4,d5=5,d6=6,d7=7;
int d2=2;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

void setup(){
  pinMode(d2,OUTPUT);
  analogWrite(d2,1);


  lcd.begin(16,2);
  lcd.print("Hello,world");

}

void loop(){
  lcd.setCursor(0,1);
  lcd.print(millis()/1000);
}