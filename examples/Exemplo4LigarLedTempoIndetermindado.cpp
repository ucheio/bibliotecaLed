#include <Arduino.h>
#include "LED.h"


//! Ligar LED por tempo indeterminado
Led led1(35);

void setup() 
{  
    led1.ligar();
}

void loop() 
{
    led1.update();
}
