/*
	Written by Lin Jungui, 08/2016.
	2 pins are required to interface to the device.

	// linear eqaution taken from http://www.howmuchsnow.com/arduino/airquality/
	//�� Christopher Nafis�ġ�Interface to Sharp GP2Y1010AU0F Particle Sensor���޸Ķ���
*/

#if (ARDUINO >= 100)
#include <Arduino.h>
#else
#include <WProgram.h>
#endif

class GP2Y1010
{
    public:
        GP2Y1010(int ledPower,int measurePin);
        float read(void);
        float voMeasured;
        float calcVoltage ;
        float dustDensity ;
    private:
        int lPower;   
        int mPin;


};
