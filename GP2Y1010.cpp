#include "GP2Y1010.h"

GP2Y1010::GP2Y1010(int ledPower,int measurePin )
{
    lPower=ledPower;
    mPin=measurePin;
    pinMode(lPower,OUTPUT);
}
float GP2Y1010::read(void)
{
    int samplingTime = 280;
    int deltaTime = 40;
    int sleepTime = 9680;

    digitalWrite(lPower,LOW); // power on the LED
    delayMicroseconds(samplingTime);

    voMeasured = analogRead(mPin); // read the dust value

    delayMicroseconds(deltaTime);
    digitalWrite(lPower,HIGH); // turn the LED off
    delayMicroseconds(sleepTime);

    // 0 - 3.3V mapped to 0 - 1023 integer values
    // recover voltage
    calcVoltage = voMeasured * 5 / 1024;

    
    dustDensity = 0.17 * calcVoltage - 0.1;

    return dustDensity;
}
