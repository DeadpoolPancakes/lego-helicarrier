int lights = 4;    // LED connected to digital pin 4
int motorsa = 0;    //pwm pin for motor +
int motorsb = 1;    //pwm pin for motor -
int brightness = 200;    // how bright the LED is

void setup() {
  // nothing happens in setup
  analogWrite(lights, brightness);
  analogWrite(motorsa, brightness);
  analogWrite(motorsb, 0);
}

void loop() {

}
