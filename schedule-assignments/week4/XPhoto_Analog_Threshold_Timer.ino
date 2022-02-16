/*
   Experimental Photography
   Interactive Media Arts @ NYU
   Ellen Nickles

   Related sources:
   ITP Physical Computing
   Lab: Serial Input to P5.js
   https://itp.nyu.edu/physcomp/labs/labs-serial-communication/lab-serial-input-to-the-p5-js-ide/

   Blink Without Delay / using millis() to program a timer
   https://docs.arduino.cc/built-in-examples/digital/BlinkWithoutDelay#code
*/

// STEP 2: Set your threshold value
int threshold = 600;

unsigned long previousMillis = 0;

// timer interval in milliseconds
const long interval = 2000;

void setup() {
  Serial.begin(9600); // initialize serial communications
}

void loop() {
  // read the input pin
  int reading = analogRead(A0);

  // STEP 1: Observe range of sensor readings in serial monitor
  // Comment out before STEP 3
  Serial.println(reading);

  // STEP 3: Uncomment when you're ready to photograph!
  // If the value of the sensor exceeds a threshold
  // send the signal to take pictures on an interval
//  if (reading > threshold) {
//    unsigned long currentMillis = millis();
//    if (currentMillis - previousMillis >= interval) {
//      // save the last time you sent data
//      previousMillis = currentMillis;
//      // Serial.println(reading);
//      Serial.write("1");
//    }
//  }
  // slight delay to stabilize the ADC
  delay(100);
}
