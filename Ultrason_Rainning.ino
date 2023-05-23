/**********************************************************************
  Ce code utilise une bibliothèque appelée 
  "UltrasonicSensor" pour mesurer la distance en 
  centimètres à l'aide d'un capteur ultrasonique.
**********************************************************************/
#include <UltrasonicSensor.h>

UltrasonicSensor ultrasonic(13, 14);

void setup() {
  Serial.begin(115200);
  
  int temperature = 22;
  ultrasonic.setTemperature(temperature);
}

void loop() {
  int distance = ultrasonic.distanceInCentimeters();
  Serial.printf("Distance: %dcm\n",distance);
  delay(300);
}
