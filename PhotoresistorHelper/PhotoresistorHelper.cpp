#include "PhotoresistorHelper.h"


Photoresistor::Photoresistor(byte pin) {
	this->pin = pin;
	pinMode(this->pin, INPUT);
}

float Photoresistor::getVoltage() {
	return analogRead(this->pin);
}

float Photoresistor::getLightLevel() {
	return (1023-analogRead(this->pin));
}

float Photoresistor::read(Photoresistor::Unit unit) {
	switch (unit)
    {
    case Photoresistor::VOLT:
        return getVoltage();
        break;
    case Photoresistor::LUX:
        return getLightLevel();
        break;
    }
}