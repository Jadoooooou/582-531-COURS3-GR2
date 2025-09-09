#include <Arduino.h>
#include <MicroOscSlip.h>
MicroOscSlip<128> monOsc(&Serial);

#define MA_BROCHE_ANGLE 32
#define MA_BROCHE_BOUTON 39

void setup() {
  pinMode( MA_BROCHE_BOUTON , INPUT );

  Serial.begin(115200);
}

void loop() {
  int maLectureBouton = digitalRead( MA_BROCHE_BOUTON );
  Serial.print(maLectureBouton);
  Serial.println();
  delay(100);

}