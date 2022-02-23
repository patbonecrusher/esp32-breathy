/**
 * Blink
 *
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */
#include "Arduino.h"
#include <math.h>

#ifndef LED_BUILTIN
#define LED_BUILTIN 13
#endif

const int ledPin = 5;


// void setup()
// {
//   // initialize LED digital pin as an output.
//   pinMode(LED_BUILTIN, OUTPUT);
//   pinMode(ledPin, OUTPUT);
// }

// void loop()
// {
//   // turn the LED on (HIGH is the voltage level)
//   digitalWrite(LED_BUILTIN, HIGH);
//   digitalWrite(ledPin, HIGH);

//   // wait for a second
//   delay(1000);

//   // turn the LED off by making the voltage LOW
//   digitalWrite(LED_BUILTIN, LOW);
//   digitalWrite(ledPin, LOW);

//    // wait for a second
//   delay(1000);
// }

//  float val = (exp(sin(millis()/2000.0*PI)) - 0.36787944)*108.0;
//   analogWrite(11, val);

//const int ledPin = 16;  // 16 corresponds to GPIO16

// setting PWM properties
const int freq = 5000;
const int ledChannel = 0;
const int resolution = 8;

const int ledChannel2 = 0;


void setup(){
  // configure LED PWM functionalitites
  ledcSetup(ledChannel, freq, resolution);
  ledcSetup(ledChannel2, freq, resolution);
  
  // attach the channel to the GPIO to be controlled
  ledcAttachPin(ledPin, ledChannel);
  ledcAttachPin(LED_BUILTIN, ledChannel);
}
 
void loop(){
	float val = (exp(sin(millis()/2000.0*PI)) - 0.36787944)*108.0;
	//a
	ledcWrite(ledChannel, val);
	ledcWrite(ledChannel2, val);

//   // increase the LED brightness
//   for(int dutyCycle = 0; dutyCycle <= 255; dutyCycle++){   
//     // changing the LED brightness with PWM
//     ledcWrite(ledChannel, dutyCycle);
//     delay(15);
//   }

//   // decrease the LED brightness
//   for(int dutyCycle = 255; dutyCycle >= 0; dutyCycle--){
//     // changing the LED brightness with PWM
//     ledcWrite(ledChannel, dutyCycle);   
//     delay(15);
//   }
}