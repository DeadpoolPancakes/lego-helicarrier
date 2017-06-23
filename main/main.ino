int lights = 4;    // LED connected to digital pin 4
int motorsa = 0;    //pwm pin for motor +
int motorsb = 1;    //pwm pin for motor -
int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by

void setup() {
  // nothing happens in setup
}

void loop() {
  //set values on first loop (should be zero)
  analogWrite(lights, brightness);
  analogWrite(motorsa, brightness);
  analogWrite(motorsb, 0); // sets the motor pin low to act as ground
  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;
  // once brightness is full just leave it at full:
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = fadeAmount;
  }
  // wait for 30 milliseconds to see the dimming effect
  delay(30);
}
