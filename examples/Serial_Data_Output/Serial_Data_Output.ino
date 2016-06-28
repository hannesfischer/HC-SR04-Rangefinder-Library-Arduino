#include <Rangefinder.h>

Rangefinder myRange(12, 11); // Echo Pin on Pin 12 Trig Pin on Pin 11;

void setup() {
  myRange.init(); //Initialize Rangefinder
  Serial.begin(9600); //Start Serial communication
}

void loop() {
  long data = myRange.readData(); //Read the Data
  Serial.println(data); //print out data/distance
  delay(100);
}
