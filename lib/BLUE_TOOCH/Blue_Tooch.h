#ifndef __BLU_TOOCH_H
#define __BLU_TOOCH_H
#include <Arduino.h>
#include <BLEDevice.h>
#include <BLEServer.h>
#include <BLEUtils.h>
#include <BLE2902.h>

void BLE_Init();
void BLE_Serial_Str(const char* message);
#endif