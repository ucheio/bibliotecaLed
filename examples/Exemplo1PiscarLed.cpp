
#include <Arduino.h>
#include "LED.h"


//! Piscar LED frequencia determinada
Led led1(35);

void setup() 
{  
  led1.piscar();
}

void loop() 
{
  led1.update();
}
