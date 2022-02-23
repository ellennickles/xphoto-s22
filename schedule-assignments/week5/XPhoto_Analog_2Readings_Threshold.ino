/*
   Experimental Photography
   Interactive Media Arts @ NYU
   Ellen Nickles

   This program reads the values of two analog pins and calcuates the absolute
   difference between the values. Send bytes to the serial port, if the absolute value is below or exceeds a threshold value. 
   
   Related source:
   ITP Physical Computing Lab
   https://itp.nyu.edu/physcomp/labs/labs-serial-communication/lab-serial-input-to-the-p5-js-ide/

  Suggested workflow:
  STEP 1: Observe range of sensor readings in serial monitor
          (save and upload to Arduino) 
  STEP 2: Set your threshold value in the variable above setup()
  STEP 3: Comment out all the serial.print() and serial.println() used in STEP 1
  STEP 4: Uncomment all the code to compare the difference in sensor readings,
          and based on that difference in a relation to the threshold, 
          send bytes to the serial port 
          (save and upload to Arduino) 

  You might need to repeat these steps when testing threshold values. 
*/

// STEP 2: Set your threshold value
int differenceThreshold = 25;
bool thresholdExceeded = false;

void setup() {
  Serial.begin(9600); // initialize serial communications
}

void loop() {
  // read the input pin
  int reading0 = analogRead(A0);
  int reading1 = analogRead(A1);

  int difference = reading0 - reading1;
  int absoluteVal = abs(difference);

  // STEP 1: Observe range of sensor readings in serial monitor
  // Comment out before STEP 3
    Serial.print(reading0);
    Serial.print(" ");
    Serial.println(reading1);
    Serial.println(absoluteVal);

  // STEP 3: Uncomment when you're ready to photograph!
  // If we are getting readings from our two sensors
//  if (reading0 > 0 && reading1 > 0 ) {
//    // and if the difference between the two readings are below a threshold
//    if (absoluteVal < differenceThreshold) {
//      // check the capture state
//      if (!thresholdExceeded) {
//        // send the signal to take a picture
//        Serial.write("1");
//        thresholdExceeded = true;
//      }
//    } else {
//      Serial.write("0");
//      thresholdExceeded = false;
//    }
//  }

  // delay in between reads for stability
  delay(100);
}
