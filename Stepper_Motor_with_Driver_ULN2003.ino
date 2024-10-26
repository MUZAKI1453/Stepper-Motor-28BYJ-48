#include <Stepper.h>

const int stepsPerRevolution = 2038;
Stepper myStepper = Stepper(stepsPerRevolution, 8,10,9,11);

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // Rotate cw slowly at 5 rpm
  myStepper.setSpeed(20);
  myStepper.step(stepsPerRevolution);
  delay(1000);

  // Rotate ccw quickly at 10 rpm
  myStepper.setSpeed(5);
  myStepper.step(-stepsPerRevolution);
  delay(1000);
}
