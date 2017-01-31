#include "Hall.h"
#include "Arduino.h"

Hall::Hall(int pin, int zeroReading) {
	this->_pin = pin;
	this->_zeroReading = zeroReading;
}

void Hall::debug() {
	this->_debug = true;
}

void Hall::init() {
	pinMode(_pin, INPUT);
	if(_debug){
		Serial.print("Initialized Hall sensor on pin: ");
		Serial.print(_pin);
		Serial.print(", zeroReading: ");
		Serial.print(_zeroReading);
		Serial.println();
	}
}

int Hall::readRaw() {
	return analogRead(_pin);
}

int Hall::read() {
	return readRaw() - _zeroReading;
}

