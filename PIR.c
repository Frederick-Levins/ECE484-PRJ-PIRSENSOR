#include <stdio.h>
#include <IO_Macros.h> // on lab computer
//#include <avr/io.h>

//#include <unistd.h>
//#include <wiringPi.h>

#define LED_PIN 13
#define ALARM_PIN 12
#define SENSOR_PIN 2

int state = 0; // by default, no motion detected
int val = 0;   // variable to store the sensor status (value)

void setup() {
    wiringPiSetup();                    // initialize wiringPi library
    pinMode(LED_PIN, OUTPUT);           // initalize LED as an output
    pinMode(ALARM_PIN, OUTPUT);
    pinMode(SENSOR_PIN, INPUT);         // initialize sensor as an input
    printf("Starting motion detection...\n");
}

void loop() {
    val = digitalRead(SENSOR_PIN);      // read sensor value
    if (val == HIGH) {                  // check if the sensor is HIGH
        digitalWrite(LED_PIN, HIGH);    // turn LED ON
        delay(100);    
        digitalWrite(ALARM_PIN, HIGH);              // delay 100 milliseconds

        if (state == 0) {
            printf("Motion detected!\n");
            state = 1;                  // update variable state to HIGH
        }

    } else {
        digitalWrite(LED_PIN, LOW);     // turn LED OFF
        digitalWrite(ALARM_PIN, LOW);
        delay(200);                     // delay 200 milliseconds

        if (state == 1) {
            printf("Motion stopped!\n");
            state = 0;                  // update variable state to LOW
        }
    }
}

int main() {
    setup();
    while(1) {
        loop();
    }
    return 0;
}