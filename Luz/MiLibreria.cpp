#include "MiLibreria.h"
#include <Arduino.h>

MiLibreria::MiLibreria(int ledPin, int ldrPin) {
  this->ledPin = ledPin;
  this->ldrPin = ldrPin;
}

void MiLibreria::inicializar() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void MiLibreria::ciclo() {
  ldrValue = analogRead(ldrPin);
  Serial.print(ldrValue);

  if (ldrValue >= 1010){
    digitalWrite(ledPin,HIGH);
  }
  else {
    digitalWrite(ledPin,LOW);
  }

  delay(3000);
}
