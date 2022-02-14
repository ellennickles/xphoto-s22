/*
   Experimental Photography
   Interactive Media Arts @ NYU
   Ellen Nickles

   Related source:
   ITP Physical Computing Lab
   https://itp.nyu.edu/physcomp/labs/labs-serial-communication/lab-serial-input-to-the-p5-js-ide/
*/

// STEP 2: Set your threshold value
int threshold = 700;
bool thresholdExceeded = false;

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
  // If the value of the sensor is above or below a threshold
//  if (reading > threshold) {
//    // check the capture state
//    if (!thresholdExceeded) {
//      // send the signal to the p5 web editor take a picture
//      Serial.write("1");
//      thresholdExceeded = true;
//    }
//  } else {
//    Serial.write("0");
//    thresholdExceeded = false;
//  }

  // delay in between reads for stability
  delay(100);
}
