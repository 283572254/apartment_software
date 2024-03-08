#include <Arduino.h>
#include <Blue_Tooch.h>



void setup() {
    Serial.begin(115200);
    BLE_Init();
    Serial.println("Waiting a client connection to notify...");
}

void loop() {


}