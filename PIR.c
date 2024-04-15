
#include <avr/io.h>
#include <util/delay.h>

int main() {
    
    //DDRD |= _BV(PD2); // set pin two as output (LED)
    //DDRD |= _BV(PD3); // set ouput buzzer
    DDRC = 0b00000000; // set all port c as input
    DDRB = 0b00000001; // all port B as ouput
    
    //PORTB = 0x00; // off state



    while(1) {
        if((PINC&(1<<0))) {
            PORTB = PORTB | (1 << PB1);          // buzzer /LED on
            PORTB = PORTB | (1 << PB2);
            _delay_ms(1000);
        } else {
          PORTB = PORTB & ~(1 << PB1);        //turn LED off
          PORTB = PORTB & ~(1 << PB2); 
        }
    }           

    return 0;
}

//#define LED_OUTPUT		PB5
//#define PIR_Input		PD4
/*
int main(void)
{
	//DDRC = 0x00;	 Set the PIR port as input port 
	//DDRB = 0xff;	 Set the LED port as output port 
    DDRB |= _BV(PD3); // set LED as output
    DDRC |= _BV(PD2); // set sensor as input

    while(1)
    {
        if (high) {

        }
	}
}*/








//#include <stdio.h>
//#include "IO_Macros.h" // on lab computer
//#include <unistd.h>
//#include <wiringPi.h>

//#define LED_PIN DDB5
//#define ALARM_PIN 4
//#define SENSOR_PIN 2

//int val = 0;   // variable to store the sensor status (value)

/*void setup() {
    PinMode(LED_PIN, OUTPUT);           // initalize LED as an output
    PinMode(ALARM_PIN, OUTPUT);
    PinMode(SENSOR_PIN, INPUT);         // initialize sensor as an input
}*/
/*
void loop() {
    val = DigitalRead(SENSOR_PIN);      // read sensor value
    if (val == 1) {                  // check if the sensor is HIGH
        DigitalWrite(LED_PIN, HIGH);    // turn LED ON   
        //DigitalWrite(ALARM_PIN, HIGH);              // delay 100 milliseconds
    } else {
        DigitalWrite(LED_PIN, LOW);     // turn LED OFF
        //DigitalWrite(ALARM_PIN, LOW);
    }
}

int main(void) {
    setup();
    while(1) {
        loop();
    }
    return 0;
}*/
