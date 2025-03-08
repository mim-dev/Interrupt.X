/* 
 * File:   main.c
 * Author: lstanton
 *
 * Created on December 26, 2024, 10:47 AM
 */

#include "system.h"
#include "timer.h"
#include "gpio.h"
#include "interrupt.h"

/*
 * 
 */
void main(void) {

    initializeSystem();
    configureGPIO();
    configureTimer0();
    configureInterrupts();
    
    ei();
    
    startTimer0();
    
    while(1) {
        ; // NO-OP
    }
    
    return;
}

void __interrupt(high_priority) interruptHandler(void) {
    
    if(PIR0bits.TMR0IF == 1) {
        
        uint8_t currentValue = LATA;
        
        if(currentValue == 0xF0) {
            currentValue &= 0x0F;
        } else {
            currentValue += 0x10;
        }
        
        LATA = currentValue;
        PIR0bits.TMR0IF = 0;
    }
    
    return;
}

