const int pin_led = 13;
const int pin_sw = 7;

void setup() {
	pinMode(pin_sw, INPUT);
	pinMode(pin_led, OUTPUT);
}

void toggleLed() {
  static int onoff = 0;
  onoff = 1 - onoff;
  digitalWrite(pin_led, onoff);
}

void loop() {
  static int led_val = 0;
  static int push_prev = 0;

  int push_now = digitalRead(pin_sw);

  if(push_prev && !push_now)
    toggleLed();

  push_prev = push_now;
//  delay(50);
}
