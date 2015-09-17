const int pin_led = 9;

void setup() {
	pinMode(pin_led, OUTPUT);
}

void loop() {
	int val = analogRead(0);
	analogWrite(pin_led,val/4);
}
