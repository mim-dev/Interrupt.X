#include "interrupt.h"

void configureInterrupts(void) {
    
    // no priority - operate in midrange compatibility mode
    INTCONbits.IPEN = 0;
    
}


