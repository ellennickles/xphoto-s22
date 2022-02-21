/*
  Based on Simple Gyroscope Example by created by Riccardo Rizzo,
  modified by Benjamin Dannegård on 30 Nov 2020, 
  and made available in the public domain.

  This example reads the gyroscope values from the LSM6DS3 sensor
  as a directional detection of the angular velocity of an axis.

  The circuit: Arduino Uno WiFi Rev2 or Arduino Nano 33 IoT

  Modified by Feb 2022 by Ellen Nickles
  Experimental Photography, Interactive Media Arts @ NYU

  Modifications:
  - Following this tutorial, Accessing Accelerometer Data on Nano 33 IoT
  https://docs.arduino.cc/tutorials/nano-33-iot/imu_gyroscope, replaced
  raw values with direction of force
  - Added code to send 1 byte of data to the serial port based on direction

  Suggested workflow:
  STEP 0: Install the library for the LSM6DS3 Inertial Module to read accelerometer values 
          Tools > Manage Libraries > LSM6DS3
  STEP 1: Observe sensor readings in serial monitor
          (save and upload to Arduino) 
  STEP 2: Decide which direction to trigger capture and update serial.write("1")
  STEP 3: Update all other directions to serial.write("0");
  STEP 4: Comment out all the println() commands in loop()
          (save and upload to Arduino) 
  STEP 5: (OPTIONAL) If needed, adjust values for threshold values

  You might need to repeat these steps when testing different directions.
*/


#include <Arduino_LSM6DS3.h>


float x, y, z;
int plusThreshold = 30;
int minusThreshold = -30;

void setup() {
  Serial.begin(9600);
  while (!Serial);
  Serial.println("Started");

  if (!IMU.begin()) {
    Serial.println("Failed to initialize IMU!");
    while (1);
  }
  Serial.print("Gyroscope sample rate = ");
  Serial.print(IMU.gyroscopeSampleRate());
  Serial.println(" Hz");
  Serial.println();
  Serial.println("Gyroscope in degrees/second");
}

void loop() {

  if (IMU.gyroscopeAvailable()) {
    IMU.readGyroscope(x, y, z);
  }
  if (y > plusThreshold)
  {
    Serial.println("Collision front");
    Serial.write("0");
    delay(500);
  }
  if (y < minusThreshold)
  {
    Serial.println("Collision back");
    Serial.write("0");
    delay(500);
  }
  if (x < minusThreshold)
  {
    Serial.println("Collision right");
    Serial.write("1");
    delay(500);
  }
  if (x > plusThreshold)
  {
    Serial.println("Collision left");
    Serial.write("0");
    delay(500);
  }

}
