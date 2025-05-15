#include <Servo.h>

// Create servo objects
Servo right_hip;
Servo right_knee;
Servo right_ankle;
Servo left_hip;
Servo left_knee;
Servo left_ankle;

// Define pin numbers
int RH = 3;
int RK = 5;
int RA = 6;
int LH = 9;
int LK = 10;
int LA = 11;

void setup() {
  // Attach servos to their pins
  right_hip.attach(RH);
  right_knee.attach(RK);
  right_ankle.attach(RA);
  left_hip.attach(LH);
  left_knee.attach(LK);
  left_ankle.attach(LA);

  // Initialize all servos to neutral position
  right_hip.write(90);
  right_knee.write(90);
  right_ankle.write(90);
  left_hip.write(90);
  left_knee.write(90);
  left_ankle.write(90);

  delay(1000); // wait 1 second before starting
}

void loop() {
  // Step 1: Lift right leg
  right_hip.write(120);
  right_knee.write(60);
  right_ankle.write(90); // fixed for balance
  delay(500);

  // Return right leg to neutral
  right_hip.write(90);
  right_knee.write(90);
  right_ankle.write(90);
  delay(500);

  // Step 2: Lift left leg
  left_hip.write(120);
  left_knee.write(60);
  left_ankle.write(90); // fixed for balance
  delay(500);

  // Return left leg to neutral
  left_hip.write(90);
  left_knee.write(90);
  left_ankle.write(90);
  delay(500);

  // Optional: simulate body forward tilt
  right_hip.write(100);
  left_hip.write(100);
  delay(300);
  right_hip.write(90);
  left_hip.write(90);
  delay(300);
}

