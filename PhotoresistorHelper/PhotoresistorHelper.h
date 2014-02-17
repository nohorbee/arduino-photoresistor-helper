#ifndef PHOTORES_H;
#define PHOTORES_H;

#include <Arduino.h>

class Photoresistor {
  private: 
  	byte pin;
  public:
  	enum Unit { VOLT, LUX }; // Use Photoresistor::VOLT or Photoresistor::LUX
    Photoresistor(byte pin);
    float getVoltage();
    float getLightLevel();
    float read(Photoresistor::Unit unit);
};

#endif