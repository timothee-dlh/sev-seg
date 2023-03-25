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
}
void one(int digit){
	digitalWrite(b, HIGH);
	digitalWrite(c, HIGH);	
	digitalWrite(digit, LOW);
}
void two(int digit){
	digitalWrite(a, HIGH);
	digitalWrite(b, HIGH);
	digitalWrite(d, HIGH);
	digitalWrite(e, HIGH);
	digitalWrite(g, HIGH);
	digitalWrite(digit, LOW);
}
void three(int digit){
	digitalWrite(a, HIGH);
	digitalWrite(b, HIGH);
	digitalWrite(g, HIGH);
	digitalWrite(c, HIGH);
	digitalWrite(d, HIGH);
	digitalWrite(digit, LOW);
}
void four(int digit){
	digitalWrite(f, HIGH);
	digitalWrite(g, HIGH);
	digitalWrite(b, HIGH);
	digitalWrite(c, HIGH);
	digitalWrite(digit, LOW);
}
void five(int digit){
	digitalWrite(a, HIGH);
	digitalWrite(f, HIGH);
	digitalWrite(g, HIGH);
	digitalWrite(c, HIGH);
	digitalWrite(d, HIGH);
	digitalWrite(digit, LOW);
}
void six(int digit){
	digitalWrite(a, HIGH);
	digitalWrite(c, HIGH);
	digitalWrite(d, HIGH);
	digitalWrite(e, HIGH);
	digitalWrite(f, HIGH);
	digitalWrite(g, HIGH);
	digitalWrite(digit, LOW);
}
void seven(int digit){
	digitalWrite(a, HIGH);
	digitalWrite(b, HIGH);
	digitalWrite(c, HIGH);
	digitalWrite(digit, LOW);
}
void eight(int digit){
	digitalWrite(a, HIGH);
	digitalWrite(b, HIGH);
	digitalWrite(c, HIGH);
	digitalWrite(d, HIGH);
	digitalWrite(e, HIGH);
	digitalWrite(f, HIGH);
	digitalWrite(g, HIGH);
	digitalWrite(digit, LOW);
}
void nine(int digit){
	digitalWrite(a, HIGH);
	digitalWrite(b, HIGH);
	digitalWrite(c, HIGH);
	digitalWrite(d, HIGH);
	digitalWrite(f, HIGH);
	digitalWrite(g, HIGH);
	digitalWrite(digit, LOW);
}

void clear(){
	digitalWrite(a, LOW);
	digitalWrite(b, LOW);
	digitalWrite(c, LOW);
	digitalWrite(d, LOW);
	digitalWrite(e, LOW);
	digitalWrite(f, LOW);
	digitalWrite(g, LOW);
	digitalWrite(D1, HIGH);
	digitalWrite(D2, HIGH);
	digitalWrite(D3, HIGH);
	digitalWrite(D4, HIGH);
}