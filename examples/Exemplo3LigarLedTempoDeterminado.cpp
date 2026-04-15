#include <Arduino.h>
#include "LED.h"


//! Ligar LED por tempo determinado
Led led1(35);

void setup() 
{  
    led1.ligar(5000);
}

void loop() 
{
    led1.update();
}
