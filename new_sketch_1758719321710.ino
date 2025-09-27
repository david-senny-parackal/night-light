#include "arduino_secrets.h"

// Night Light with 1 Digital LDR Module
// LDR module connected to D2
// LED connected to D7

int ldr = 2;   // LDR digital output pin
int led = 4 ;  // LED pin

void setup() {
  pinMode(ldr, INPUT);     // LDR input
  pinMode(led, OUTPUT);    // LED output
  Serial.begin(9600);      // For debugging
}

void loop() {
  int ldrValue = digitalRead(ldr);

  Serial.print("LDR: ");
  Serial.println(ldrValue);


  if (ldrValue == HIGH) {      // Dark detected
    digitalWrite(led, HIGH);   // Turn LED ON
  } else {                      // Bright detected
    digitalWrite(led, LOW);    // Turn LED OFF
  }

  delay(200);
}
