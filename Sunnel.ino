
 #include <Servo.h>,
Servo servo;

// constants won't change. They're used here to set pin numbers:
const int redButtonPin = 2;     // the number of the pushbutton pin
const int redLedPin =  12;      // the number of the LED pin
const int blueButtonPin = 4;     // the number of the pushbutton pin
const int blueLedPin =  13;      // the number of the LED pin
const int servoPin = 3;
const int sunPinOut = 9;
const int sunPinIn = A1;
const int servoPot = A0;
// variables will change:

int redButtonState = 0;         // variable for reading the pushbutton status
int blueButtonState = 0;         // variable for reading the pushbutton status
int potServoValue = 0;
int potLedValue = 0;
int sunSensorValue = 0;
int sunBrightnessValue = 0;
int val = 0; // variable to store the read value
float volt = 0; // variable to hold the voltage read

void setup() {
  servo.attach(servoPin);
  
  // initialize the LED pin as an output:
  pinMode(redLedPin, OUTPUT);
  pinMode(blueLedPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(redButtonPin, INPUT);
  pinMode(blueButtonPin, INPUT);
  pinMode(sunPinOut, OUTPUT); 
}

void loop() {
  sunSensorValue = analogRead(sunPinIn);
  // map it to the range of the analog out:
  
  //sunBrightnessValue = map(sunSensorValue, 0, 1023, 0, 255);
  // change the analog out value:
  volt =(5.0 * sunSensorValue) / 1023;
  sunSensorValue = 255 * (volt / 5);
 
  analogWrite(sunPinOut, sunSensorValue);

  // print the results to the Serial Monitor:
 

  // read the state of the pushbutton value:
  // redButtonState = digitalRead(redButtonPin);
//  blueButtonState = digitalRead(blueButtonPin);
//  potServoValue = analogRead(servoPot);
//  potServoValue = map(potServoValue, 0, 1023, 0,360);
//  servo.write(potServoValue);
  
  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
//  if (redButtonState == HIGH) {
//    // turn LED on:
//    digitalWrite(redLedPin, HIGH);
//  } 
//  else {
    // turn LED off:
//    digitalWrite(redLedPin, LOW);
 // }
//   if (blueButtonState == HIGH) {
    // turn LED on:
 //   digitalWrite(blueLedPin, HIGH);
 // } 
 // else {
    // turn LED off:
 //   digitalWrite(blueLedPin, LOW);
//  }
}

