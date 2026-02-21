#include <Arduino.h>

/**
 * @file main.cpp
 * @brief LDR-based Light Intensity Monitoring
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

    ldrValue = analogRead(LDR_PIN);

    Serial.print("Raw ADC Value: ");
    Serial.println(ldrValue);

    String brightnessStatus;

    if (ldrValue < 500) {
        brightnessStatus = "Bright Environment";
    } else {
        brightnessStatus = "Dark Environment";
    }

    Serial.print("Status: ");
    Serial.println(brightnessStatus);
    Serial.println("---------------------------------");

    delay(1000);
}