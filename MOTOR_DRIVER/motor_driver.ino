/*
reference
	http://www.rt-shop.jp/blog/archives/7087
*/

#define PWM0 9
#define PWM1 11
#define LED 13
 
void setup() {
        pinMode(PWM0,OUTPUT);
        pinMode(PWM1,OUTPUT);
        pinMode(LED,OUTPUT);
}
 
void loop() {
        analogWrite(PWM0, 255);
        digitalWrite(LED,HIGH);
        delay(5000);
 
        analogWrite(PWM0, 0);
        digitalWrite(LED,LOW);
        delay(1000);
 
        analogWrite(PWM1, 255);
        digitalWrite(LED,HIGH);
        delay(5000);
 
        analogWrite(PWM1, 0);
        digitalWrite(LED,LOW);
        delay(1000);
}
