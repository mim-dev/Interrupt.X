#include "gpio.h"

void configureGPIO() {
    
    ANSELA |= 0xF0;
    TRISA &= 0x0F;
    LATA &= 0x0F; 
    WPUA &= 0x0F;
    ODCONA &= 0x0F;
    SLRCONA |= 0xF0;
}