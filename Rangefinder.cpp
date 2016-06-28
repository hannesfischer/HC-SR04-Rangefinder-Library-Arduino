#include "Arduino.h"
#include "Rangefinder.h"

Rangefinder::Rangefinder(int echoPin, int trigPin)
{
	_trigPin = trigPin;
	_echoPin = echoPin;
}

void Rangefinder::init(){
	pinMode(_trigPin, OUTPUT);
	pinMode(_echoPin, INPUT);
}

long Rangefinder::readData(){
	digitalWrite(_trigPin, HIGH);
	delayMicroseconds(10); 
 
	digitalWrite(_trigPin, LOW);
	_duration = pulseIn(_echoPin, HIGH);
	_distance = _duration/58.2;
	return _distance;
}