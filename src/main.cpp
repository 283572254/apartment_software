#include <Arduino.h>
#include <Blue_Tooch.h>
#include <Servo.h>
extern char gReceivedValue[MAX_RX_VALUE_LENGTH + 1];
extern uint8_t gReceviedStatue;
void setup() {
    Serial.begin(115200);   //Serial init
    BLE_Init();             //BLE init
    Servo_Init(PWM_CHANNEL,PWM_FREQUENCY,PWM_RESOLUTION,SERVO_PIN);
    Serial.println("Waiting a client connection to notify...");
}

void loop() 
{
    if(gReceviedStatue==1&&gReceivedValue[0]==1)
    {
       Serial.println(gReceivedValue); 
       gReceviedStatue = 0;
    }
    Servo_control(PWM_CHANNEL,0);
    delay(500);
    Servo_control(PWM_CHANNEL,180);
    delay(500);

}