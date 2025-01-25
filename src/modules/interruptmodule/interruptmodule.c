#include "interrupt.h"

void configureInterrupts(void) {
    
    // no priority
    INTCONbits.IPEN = 0;
    
    // enable TIM0 interrupt and clear the flag
    PIE0bits.TMR0IE = 1;
    PIR0bits.TMR0IF = 0;
}


