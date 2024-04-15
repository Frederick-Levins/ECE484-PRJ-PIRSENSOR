/* Frederick Levins
   ECE 484 - PIR Midterm
   Simple motion detection based alarm system. Operated through IC,
   AVR, and C. See compile script to run. */

#include <avr/io.h>

int main() {
    
    DDRC = 0b00000000; // set all PORTC as input
    DDRB = 0b00000001; // all PORTB as output
    
    PORTB = 0x00; // initial off state for all PORTB


    while(1) {
        if((PINC&(1<<0))) {
            PORTB = PORTB | (1 << PB1);          // LED ON
            PORTB = PORTB | (1 << PB2);          // BUZZER ON
        } else {
          PORTB = PORTB & ~(1 << PB1);        // LED OFF
          PORTB = PORTB & ~(1 << PB2);        // BUZZER OFF
        }
    }           
    return 0;
}
