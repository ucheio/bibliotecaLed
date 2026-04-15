#include <Arduino.h>
#include "LED.h"


//! Piscar LED por quantidade determinada de vezes
Led led1(35);

void setup() 
{  
    led1.piscar(2000, 15);
}

void loop() 
{
    led1.update();
}
