#ifndef Rangefinder_h
#define Rangefinder_h

#include "Arduino.h"

class Rangefinder{
	public:
		Rangefinder(int echoPin, int trigPin);
		void init();
		long readData();
		long distance;
		long duration;
	private:
		int _echoPin;
		int _trigPin;

		long _distance;
		long _duration;
};

#endif