#include <Arduino.h>

/**
 * @file main.cpp
 * @brief LDR Light Intensity Monitor
 * @author ansh-codr
 * @date 2026-02-21
 */

int LDR_PIN = A0;
int ldrValue = 0;

void setup() {

    Serial.begin(9600);

    Serial.println("=================================");
    Serial.println("  LDR Light Intensity Monitor");
    Serial.println("  System Initializing...");
    Serial.println("=================================");
}

void loop() {
}