const int pin_led = 9;

void setup() {
  pinMode(pin_led, OUTPUT);
}

void loop() {
  analogWrite(pin_led,255);
  delay(2000);
  analogWrite(pin_led,0);
  delay(2000);
}
