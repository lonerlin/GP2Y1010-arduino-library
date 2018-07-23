
#include "GP2Y1010.h"

#define LEDPOWERPIN 5
#define MEASUREPIN 0

GP2Y1010 dustMeter(LEDPOWERPIN,MEASUREPIN);

void setup() {
  

}

void loop() {

  Serial.print("Dust(ug/m^3):");
  Serial.println(dustMeter.read()*1000);
  delay(1000);

}
