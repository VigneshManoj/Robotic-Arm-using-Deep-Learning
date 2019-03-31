#include <NewPing.h>

#define TRIGGER_PIN 5

#define ECHO_PIN 4

#define MAX_DISTANCE 200

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

void setup() {

Serial.begin(9600);

}

void loop() {

delay(50);

unsigned int uS = sonar.ping();

pinMode(ECHO_PIN,OUTPUT);

digitalWrite(ECHO_PIN,LOW);

pinMode(ECHO_PIN,INPUT);

Serial.print("Ping: ");

Serial.print(uS / US_ROUNDTRIP_CM);

Serial.println("cm");

}
