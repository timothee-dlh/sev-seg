#include "Arduino.h"
#include "sev_seg.h"
void zero(int digit){
	digitalWrite(a, HIGH);
	digitalWrite(b, HIGH);
	digitalWrite(c, HIGH);
	digitalWrite(d, HIGH);
	digitalWrite(e, HIGH);
	digitalWrite(f, HIGH);
	digitalWrite(g, LOW);
	digitalWrite(digit, LOW);
	delay(5);
}
void one(int digit){
	digitalWrite(b, HIGH);
	digitalWrite(c, HIGH);	
	digitalWrite(digit, LOW);
	delay(5);
}
void two(int digit){
	digitalWrite(a, HIGH);
	digitalWrite(b, HIGH);
	digitalWrite(d, HIGH);
	digitalWrite(e, HIGH);
	digitalWrite(g, HIGH);
	digitalWrite(digit, LOW);
	delay(5);
}
void clear(int digit1, int digit2, int digit3, int digit4){
	digitalWrite(digit1, LOW);
	digitalWrite(digit2, LOW);
	digitalWrite(digit3, LOW);
	digitalWrite(digit4, LOW);
	delay(5);

}