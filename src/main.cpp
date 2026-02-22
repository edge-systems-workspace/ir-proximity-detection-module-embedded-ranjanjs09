#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Obstacle Detection System using IR Sensor
 * @author Purendra Ranjan [ranjanjs09]
 * @date 19-02-2026
 *
 * @details
 * Reads digital input from IR sensor
 * and detects obstacle presence.
 */

int ir_pin = 8;
int led_pin = 13;

void setup() {
    pinMode(ir_pin, INPUT);
    pinMode(led_pin, OUTPUT);
}

void loop() {
    Serial.begin(9600);
    int value = digitalRead(ir_pin);
    if(value==LOW){
        Serial.println("OBJECT DETECTED");
        digitalWrite(13,1);
    } else{
        Serial.println("OBJECT NOT DETECTED");
        digitalWrite(13,0);
    }
    delay(300);
}