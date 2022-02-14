/*
   Experimental Photography
   Interactive Media Arts @ NYU
   Ellen Nickles
   
   Related source:
   ITP Physical Computing
   Lab: Sensor Change Detection
   https://itp.nyu.edu/physcomp/labs/labs-arduino-digital-and-analog/lab-sensor-change-detection/

   Arduino Debounce Example
   https://www.arduino.cc/en/Tutorial/BuiltInExamples/Debounce
   Debouncing: "checking twice in a short period of time to make sure the pushbutton state (or switch  state) is definitely pressed (or toggled)"
*/

int inPin = 2;                // the number of the input pin
int switchState;              // the current reading from the input pin
int lastSwitchState = LOW;    // the previous reading from the input pin

unsigned long lastDebounceTime = 0;   // the last time the output pin was toggled
unsigned long debounceDelay = 50;    // the debounce time; increase if the output flickers

void setup() {
  // initialize serial communication
  Serial.begin(9600);
  // make pin 2 an input
  pinMode(inPin, INPUT);
}

void loop() {

  // read the state of the switch into a local variable
  int reading = digitalRead(inPin);
   // (i.e. the input went from LOW to HIGH), and you've waited long enough
  // since the last state change to ignore any noise:

  // if the state changed, due to noise or toggling
  if (reading != lastSwitchState) {
    // reset the debouncing timer
    lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) > debounceDelay) {
    // whatever the reading, it's been there for longer than the debounce delay
    // take the value as the actual current state

    // if the switch state has changed
    if (reading != switchState) {
      switchState = reading;

      // only send data if the switch state is HIGH
      if (switchState == HIGH) {
        //  Send a single byte
        Serial.write("1");
      }
    }
  }

  // save the reading for next comparison
  // next time through the loop, it'll be the lastSwitchState
  lastSwitchState = reading;
}
