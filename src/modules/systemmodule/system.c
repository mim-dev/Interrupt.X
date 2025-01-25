#include "systemmodule.h"


void initializeSystem(void) {
    systemConfigureClock();
    systemConfigurePORTs();
}

void systemConfigureClock(void) 
{
    OSCCON1 = 0x61;
    OSCCON3 = 0x00;
    OSCFRQ = 0x05;
    OSCTUNE = 0x00;
    OSCEN = 0x00;
    
}

void systemConfigurePORTs(void) {
    
    LATA = 0x00;
    LATB = 0x00;
    LATC = 0x00;
    LATD = 0x00;
    LATE = 0x00;

    TRISA = 0xFF;
    TRISB = 0xFF;
    TRISC = 0xFF;
    TRISD = 0xFF;
    TRISE = 0x07;

    ANSELA = 0xFF;
    ANSELB = 0xFF;
    ANSELC = 0xFF;
    ANSELD = 0xFF;
    ANSELE = 0x07;

    WPUA = 0x00;
    WPUB = 0x00;
    WPUC = 0x00;
    WPUD = 0x00;
    WPUE = 0x00;
    
    ODCONA = 0x00;
    ODCONB = 0x00;
    ODCONC = 0x00;
    ODCOND = 0x00;
    ODCONE = 0x00;

    SLRCONA = 0xFF;
    SLRCONB = 0xFF;
    SLRCONC = 0xFF;
    SLRCOND = 0xFF;
    SLRCONE = 0x07;

    INLVLA = 0xFF;
    INLVLB = 0xFF;
    INLVLC = 0xFF;
    INLVLD = 0xFF;
    INLVLE = 0x0F;
}