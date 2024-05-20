#include <Arduino.h>

int delaytime = 100;
int LedList[10] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
int LedListLength;

void setup() {
  LedListLength = sizeof(LedList) / sizeof(LedList[0]);
  for(int a =0;a<LedListLength;a++){
    pinMode(LedList[a], OUTPUT);
}}

void loop() {
  for(int a = 0;a<LedListLength;a++){
    digitalWrite(LedList[a], HIGH);
    delay(delaytime);
    digitalWrite(LedList[a], LOW);
    delay(delaytime);
}}

