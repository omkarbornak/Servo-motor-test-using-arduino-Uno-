#include <Servo.h>

Servo horizontalServo; // Create a servo object for horizontal control
Servo verticalServo;   // Create a servo object for vertical control

// Define pins for servos
const int horizontalPin = 9; // Pin connected to horizontal servo
const int verticalPin = 10;  // Pin connected to vertical servo

void setup() {
  // Attach servos to the defined pins
  horizontalServo.attach(horizontalPin);
  verticalServo.attach(verticalPin);
}

void loop() {
  // Control horizontal servo (direction and speed)
  // 90 degrees = stop, 0 degrees = max speed in one direction, 180 degrees = max speed in the other direction
  horizontalServo.write(0); // Rotate horizontally at maximum speed in one direction
  delay(1000); // Wait for 1 second

  horizontalServo.write(180); // Rotate horizontally in the opposite direction at maximum speed
  delay(1000); // Wait for 1 second

  horizontalServo.write(90); // Stop the horizontal servo
  delay(1000); // Wait for 1 second

  // Control vertical servo (direction and speed)
  verticalServo.write(0); // Rotate vertically at maximum speed in one direction
  delay(1000); // Wait for 1 second

  verticalServo.write(180); // Rotate vertically in the opposite direction at maximum speed
  delay(1000); // Wait for 1 second

  verticalServo.write(90); // Stop the vertical servo
  delay(1000); // Wait for 1 second
}
