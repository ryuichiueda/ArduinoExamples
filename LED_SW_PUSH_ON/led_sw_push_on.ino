const int pin_led = 13;
const int pin_sw = 7;

void setup() {
	pinMode(7, INPUT);
	pinMode(13, OUTPUT);
}

void loop() {
	if(digitalRead(pin_sw))
		digitalWrite(pin_led,HIGH);
	else
		digitalWrite(pin_led,LOW);
}
