/**
 *  Template for the main.c file.
 */


#ifndef F_CPU                   // Define the clock speed
#define F_CPU 16000000UL        // This example is 16MHz
#endif

#ifndef __AVR_ATmega328P__      // Select the microcontroller model.
#define __AVR_ATmega328P__
#endif

#ifndef __OPTIMIZE__                    // These two macros were needed to
#define __OPTIMIZE__                    // get rid of some compilation
#endif                                  // complaints related to _delay_ms()
#ifndef __DELAY_BACKWARD_COMPATIBLE__
#define __DELAY_BACKWARD_COMPATIBLE__
#endif

#include <avr/io.h>
#include <stdio.h>

 // ----------------------------------------------------------------------------
 // -----  GLOBALS & MACROS                                                -----
 // ----------------------------------------------------------------------------


 // ----------------------------------------------------------------------------
 // -----  FUNCTIONS                                                       -----
 // ----------------------------------------------------------------------------

int main(void) {
    // -------------------------------------------------------------------------
    // -----  INITS                                                        -----
    // -------------------------------------------------------------------------


    // -------------------------------------------------------------------------
    // -----  SETUP                                                        -----
    // -------------------------------------------------------------------------


    // -------------------------------------------------------------------------
    // -----  MAIN EVENT LOOP                                              -----
    // -------------------------------------------------------------------------

    while (1) {

    }

    return 0;                   // Just to ensure the compiler doesn't whinge.

}
