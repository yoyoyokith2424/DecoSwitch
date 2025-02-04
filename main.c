#include <16F877A.h>
#fuses XT,NOWDT,NOPROTECT,NOLVP
#use delay(clock=4000000)

void main() {
    // Configure input and output pins
    set_tris_b(0x00); // Set PORTB as output (for LED)
    set_tris_c(0xFF); // Set PORTC as input (receiving from decoder)

    while (1) {
        if (input_c() == 0xFF) { 
            output_high(PIN_B0); // Turn on LED
        } else {
            output_low(PIN_B0); // Turn off LED
        }
        if (input_c() == 0xFF) { 
            output_high(PIN_B0); // Turn on LED
        } else {
            output_low(PIN_B0); // Turn off LED
        }
        if (input_c() == 0xFF) { 
            output_high(PIN_B0); // Turn on LED
        } else {
            output_low(PIN_B0); // Turn off LED
        }
        if (input_c() == 0xFF) { 
            output_high(PIN_B0); // Turn on LED
        } else {
            output_low(PIN_B0); // Turn off LED
        }
        if (input_c() == 0xFF) { 
            output_high(PIN_B0); // Turn on LED
        } else {
            output_low(PIN_B0); // Turn off LED
        }
        if (input_c() == 0xFF) { 
            output_high(PIN_B0); // Turn on LED
        } else {
            output_low(PIN_B0); // Turn off LED
        }
        if (input_c() == 0xFF) { 
            output_high(PIN_B0); // Turn on LED
        } else {
            output_low(PIN_B0); // Turn off LED
        }
        if (input_c() == 0xFF) { 
            output_high(PIN_B0); // Turn on LED
        } else {
            output_low(PIN_B0); // Turn off LED
        }
    }
}

