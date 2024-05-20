/*
 * @Author: xumeng xm_2048@qq.com
 * @Date: 2024-05-18 16:09:26
 * @LastEditors: xumeng xm_2048@qq.com
 * @LastEditTime: 2024-05-20 16:48:30
 * @FilePath: \xumeng-hw1d:\code\mygit\xumeng-hw2\PlatformIO\Projects\ControlLight\src\main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
/*
 * @Author: xumeng xm_2048@qq.com
 * @Date: 2024-05-17 19:45:11
 * @LastEditors: xumeng xm_2048@qq.com
 * @LastEditTime: 2024-05-18 10:03:00
 * @FilePath: \xumeng-hw1d:\code\mygit\xumeng-hw2\PlatformIO\Projects\Connect\src\main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Arduino.h>


// 设置输入




int led_1 = 2;
int led_2 = 3;
int led_3 = 4;
String myString = "";
String short_String="";
String Control_LED[]={"1","2","3"};

void setup() {
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
  Serial.begin(9600);
  Serial.println("Please input your command");
}

void loop() {
  
  if(Serial.available()>0){
    myString = Serial.readStringUntil('\n');//read the string
    short_String = myString.substring(0,1);
    Control_LED[0] = Control_LED[0].substring(0,1);
    Control_LED[1] = Control_LED[1].substring(0,1);
    Control_LED[2] = Control_LED[2].substring(0,1);
 
}
if(short_String.compareTo(Control_LED[0])==0){
  
   if (digitalRead(led_1)==HIGH )
    {
      digitalWrite(led_1, LOW);
      Serial.println("LED1_OFF");
    }
    else 
    {
      digitalWrite(led_1, HIGH);
      Serial.println("LED1_ON");
    
  }
  
  }
else if(short_String.compareTo(Control_LED[1])==0){
 
    if (digitalRead(led_2)==LOW )
    {
      digitalWrite(led_2, HIGH);
      Serial.println("LED2_ON");
    }
    else 
    {
      digitalWrite(led_2, LOW);
      Serial.println("LED2_OFF");
    
  }}
else if(short_String.compareTo(Control_LED[2])==0){
    if (digitalRead(led_3)==LOW )
    {
      digitalWrite(led_3, HIGH);
      Serial.println("LED3_ON");
      
    }
    else 
    {
      digitalWrite(led_3, LOW);
      Serial.println("LED3_OFF");
      
    
  }
  }
}

