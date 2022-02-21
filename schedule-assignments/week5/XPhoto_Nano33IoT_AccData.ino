/*
  Based on Simple Accelerometer Example by John Rizzo
  Language: Arduino

  This program reads the acceleration values from the LSM6DS3 sensor. 
  Originally created 10 Jul 2019 by Riccardo Rizzo,
  and made available in the public domaim.

  Modified by Feb 2022 by Ellen Nickles
  Experimental Photography, Interactive Media Arts @ NYU

  Modifications:
  - Following this tutorial, Accessing Accelerometer Data on Nano 33 IoT
  https://docs.arduino.cc/tutorials/nano-33-iot/imu_accelerometer, replaced
  raw values with degrees
  - Added code to respond to exceeding a threshold value by sending 1 byte of data to the serial port

  Suggested workflow:
  STEP 0: Install the library for the LSM6DS3 Inertial Module to read accelerometer values 
          Tools > Manage Libraries > LSM6DS3
          (save and upload to Nano 33 IoT) 
  STEP 1: Observe range of sensor readings in serial monitor
  STEP 2: Set your threshold value in the variable above setup()
  STEP 3: Comment out all the serial.print() and serial.println() commands in loop()
  STEP 4a: Uncomment all the code to respond to exceeding a threshold value
  STEP 4b: Decide if you use degreesX or degreesY values
           (save and upload to Nano 33 IoT) 

  You might need to repeat these steps when testing threshold values. 
*/

#include <Arduino_LSM6DS3.h>

float x, y, z;
int degreesX = 0;
int degreesY = 0;

int threshold = 80; // STEP 2, value is in degrees
bool thresholdExceeded = false;

void setup() {
  Serial.begin(9600);
  while (!Serial);
  Serial.println("Started");

  if (!IMU.begin()) {
    Serial.println("Failed to initialize IMU!");
    while (1);
  }

  Serial.print("Accelerometer sample rate = ");
  Serial.print(IMU.accelerationSampleRate());
  Serial.println("Hz");
}

void loop() {

  if (IMU.accelerationAvailable()) {
    IMU.readAcceleration(x, y, z);
  }

  // STEP 3 comment out serial.print() and serial.println()
  if (x > 0.1) {
    x = 100 * x;
    degreesX = map(x, 0, 97, 0, 90);
    Serial.print("Tilting up ");
    Serial.print(degreesX);
    Serial.println("  degrees");
  }
  if (x < -0.1) {
    x = 100 * x;
    degreesX = map(x, 0, -100, 0, 90);
    Serial.print("Tilting down ");
    Serial.print(degreesX);
    Serial.println("  degrees");
  }
  if (y > 0.1) {
    y = 100 * y;
    degreesY = map(y, 0, 97, 0, 90);
    Serial.print("Tilting left ");
    Serial.print(degreesY);
    Serial.println("  degrees");
  }
  if (y < -0.1) {
    y = 100 * y;
    degreesY = map(y, 0, -100, 0, 90);
    Serial.print("Tilting right ");
    Serial.print(degreesY);
    Serial.println("  degrees");
  }

  // STEP 4a uncomment the code in this section
  // STEP 4b decide if you will use degreesX or degreesY value
  // // If the value is above or below the threshold
  //  if (degreesX > threshold) {
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

  delay(500);
}
