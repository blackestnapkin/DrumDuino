#include "EnableInterrupt.h"

unsigned long input0_time = 0;  
unsigned long last_input0_time = 0; 

unsigned long input1_time = 0;  
unsigned long last_input1_time = 0; 

unsigned long input2_time = 0;  
unsigned long last_input2_time = 0; 

unsigned long input3_time = 0;  
unsigned long last_input3_time = 0; 

unsigned long input4_time = 0;  
unsigned long last_input4_time = 0; 

unsigned long input5_time = 0;  
unsigned long last_input5_time = 0;

void setup() {
  enableInterrupt(A0, Input0, FALLING);
  enableInterrupt(A1, Input1, FALLING);
  enableInterrupt(A2, Input2, FALLING);
  enableInterrupt(A3, Input3, FALLING);
  enableInterrupt(A4, Input4, FALLING);
  enableInterrupt(A5, Input5, FALLING);
  Serial.begin(31250);
}

void Input0() {
  input0_time = millis();
  if (input0_time - last_input0_time > 35)
  {
    Serial.write(0x90);
    Serial.write(60);
    Serial.write(127);

    Serial.write(0x90);
    Serial.write(60);
    Serial.write(0);
  }
  last_input0_time = input0_time;
}

void Input1() {
  input1_time = millis();
  if (input1_time - last_input1_time > 15)
  {
    Serial.write(0x90);
    Serial.write(63);
    Serial.write(127);

    Serial.write(0x90);
    Serial.write(63);
    Serial.write(0);
  }
  last_input1_time = input1_time;
}

void Input2() {
  input2_time = millis();
  if (input2_time - last_input2_time > 15)
  {
    Serial.write(0x90);
    Serial.write(66);
    Serial.write(127);

    Serial.write(0x90);
    Serial.write(66);
    Serial.write(0);
  }
  last_input2_time = input2_time;
}

void Input3() {
  input3_time = millis();
  if (input3_time - last_input3_time > 15)
  {
    Serial.write(0x90);
    Serial.write(69);
    Serial.write(127);

    Serial.write(0x90);
    Serial.write(69);
    Serial.write(0);
  }
  last_input3_time = input3_time;
}

void Input4() {
  input4_time = millis();
  if (input4_time - last_input4_time > 15)
  {
    Serial.write(0x90);
    Serial.write(72);
    Serial.write(127);

    Serial.write(0x90);
    Serial.write(72);
    Serial.write(0);
  }
  last_input4_time = input4_time;
}

void Input5() {
  input5_time = millis();
  if (input5_time - last_input5_time > 15)
  {
    Serial.write(0x90);
    Serial.write(75);
    Serial.write(127);

    Serial.write(0x90);
    Serial.write(75);
    Serial.write(0);
  }
  last_input5_time = input5_time;
}

void loop() {

}

