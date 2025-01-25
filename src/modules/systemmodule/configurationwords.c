#include "system.h"

// CONFIG1L
#pragma config FEXTOSC = OFF                // external oscillator not used
#pragma config RSTOSC = HFINTOSC_1MHZ       // start up with internal oscillator - 4MHz with 4:1 clock divider

// CONFIG1H
#pragma config CLKOUTEN = OFF               // not send clock to any GPIO
#pragma config CSWEN = ON                   // enable clock switching
#pragma config FCMEN = ON                   // fail-safe clock monitor enabled

// CONFIG2L
#pragma config MCLRE = EXTMCLR              // sets RE3 as MCLR
#pragma config PWRTE = OFF                  // power up timer disabled
#pragma config LPBOREN = OFF                // low power brown-out reset disabled
#pragma config BOREN = SBORDIS              // brown-out reset enabled, SBOREN bit ignored

// CONFIG2H
#pragma config BORV = VBOR_190              // brown-out reset voltage - 1.9v
#pragma config ZCD = OFF                    // zero cross detect disables
#pragma config PPS1WAY = ON                 // peripheral pin select - lock bit can be cleared and set one, registers remain locked after one unlock/lock cycle
#pragma config STVREN = ON                  // stack full of underflow condition causes processor reset
#pragma config XINST = OFF                  // extended instruction disabled

// CONFIG3L
#pragma config WDTCPS = WDTCPS_31           // watch dog timer period select - divider ratio 1:65536, software can control period select
#pragma config WDTE = OFF                   // watch dog timer disabled

// CONFIG3H
#pragma config WDTCWS = WDTCWS_7            // watch dog timer window always open, software contolled, keyed access not required
#pragma config WDTCCS = SC                  // watch dog timer input clock selection under software control

// CONFIG4L
#pragma config WRT0 = OFF                   // User NVM Block 0 not write-protected
#pragma config WRT1 = OFF                   // User NVM Block 1 not write-protected 
#pragma config WRT2 = OFF                   // User NVM Block 2 not write-protected
#pragma config WRT3 = OFF                   // User NVM Block 3 not write-protected
#pragma config WRT4 = OFF                   // User NVM Block 4 not write-protected
#pragma config WRT5 = OFF                   // User NVM Block 5 not write-protected
#pragma config WRT6 = OFF                   // User NVM Block 6 not write-protected
#pragma config WRT7 = OFF                   // User NVM Block 7 not write-protected

// CONFIG4H
#pragma config WRTC = OFF                   // Configuration Register not write-protected
#pragma config WRTB = OFF                   // Boot Block not write-protected
#pragma config WRTD = OFF                   // Data EEPROM is not write-protected
#pragma config SCANE = ON                   // scanner module is available for use, module is enabled via PMD0[SCANMD]
#pragma config LVP = ON                     // low voltage programming enabled, MCLR/VPP pin functions as MCLR, MCLRE bit is ignored

// CONFIG5L
#pragma config CP = OFF                     // User NVM program memory code protection disabled
#pragma config CPD = OFF                    // Data NVM  memory code protection disabled

// CONFIG6L
#pragma config EBTR0 = OFF                  // Memory Block 0 not protected from table reads executed in other blocks
#pragma config EBTR1 = OFF                  // Memory Block 1 not protected from table reads executed in other blocks
#pragma config EBTR2 = OFF                  // Memory Block 2 not protected from table reads executed in other blocks
#pragma config EBTR3 = OFF                  // Memory Block 3 not protected from table reads executed in other blocks
#pragma config EBTR4 = OFF                  // Memory Block 4 not protected from table reads executed in other blocks
#pragma config EBTR5 = OFF                  // Memory Block 5 not protected from table reads executed in other blocks
#pragma config EBTR6 = OFF                  // Memory Block 6 not protected from table reads executed in other blocks
#pragma config EBTR7 = OFF                  // Memory Block 7 not protected from table reads executed in other blocks

// CONFIG6H
#pragma config EBTRB = OFF                  // Boot Block NOT protected from table reads executed in other blocks
