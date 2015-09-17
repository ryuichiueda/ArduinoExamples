const int pin_led = 13;
const int pin_sw = 7;

void setup() {
	pinMode(pin_sw, INPUT);
	pinMode(pin_led, OUTPUT);
}

void loop() {
	int val = digitalRead(pin_sw);
	digitalWrite(pin_led,val);
}
