/*
 * @Author: xumeng xm_2048@qq.com
 * @Date: 2024-05-18 10:54:15
 * @LastEditors: xumeng xm_2048@qq.com
 * @LastEditTime: 2024-05-20 13:32:53
 * @FilePath: \xumeng-hw1d:\code\mygit\xumeng-hw2\PlatformIO\Projects\lcd\src\main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Arduino.h>
#include <LiquidCrystal.h>
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