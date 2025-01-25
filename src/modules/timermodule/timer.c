#include "timer.h"

void configureTimer0(void) {
          
    T0CON0 = 0;
    T0CON1 = ( (0b010 << _T0CON1_T0CS_POSITION) 
            | (0b1110 << _T0CON1_T0CKPS_POSITION) );
    TMR0H = 121;
}

void startTimer0(void) {
    
    T0CON0bits.T0EN = 0b1; 
}
