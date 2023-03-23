#include "Arduino.h"
#include "sev_seg.h"
int nmb1;
int nmb2;
int nmb3;
int nmb4;
int a, b, c, d, e, f, g, D1, D2, D3, D4;
void convert(int number){
	String strNumber = String(number);
	nmb1 = strNumber.charAt(0) - '0';
	nmb4 = strNumber.charAt(1) - '0';
	nmb3 = strNumber.charAt(2) -'0';
	nmb2 = strNumber.charAt(3) -'0';
	if (nmb1 > 9 || nmb1 < 0) {nmb1 = 0;}
	if (nmb2 > 9 || nmb2 < 0) {nmb2 = 0;}
	if (nmb3 > 9 || nmb3 < 0) {nmb2 = 0;}
	if (nmb4 > 9 || nmb4 < 0) {nmb2 = 0;}

	
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
//Doesn't work, arduino dont accept the digitalWrite frome a function ?
/*void output( int D1, int D2, int D3, int D4, int DP, int a, int b, int c, int d, int e, int f, int g){
	digitalWrite(D1, OUTPUT);
	digitalWrite(D2, OUTPUT);
	digitalWrite(D3, OUTPUT);
	digitalWrite(D4, OUTPUT);
	digitalWrite(DP, OUTPUT);
	digitalWrite(a, OUTPUT);
	digitalWrite(b, OUTPUT);
	digitalWrite(c, OUTPUT);
	digitalWrite(d, OUTPUT);
	digitalWrite(e, OUTPUT);
	digitalWrite(f, OUTPUT);
	digitalWrite(g, OUTPUT);
}
void output( int D1, int D2, int D3, int D4, int a, int b, int c, int d, int e, int f, int g){
	digitalWrite(D1, OUTPUT);
	digitalWrite(D2, OUTPUT);
	digitalWrite(D3, OUTPUT);
	digitalWrite(D4, OUTPUT);
	digitalWrite(a, OUTPUT);
	digitalWrite(b, OUTPUT);
	digitalWrite(c, OUTPUT);
	digitalWrite(d, OUTPUT);
	digitalWrite(e, OUTPUT);
	digitalWrite(f, OUTPUT);
	digitalWrite(g, OUTPUT);
}*/
void pin(int one, int two, int three, int four, int five, int six, int seven, int Do, int Dt, int Dt3, int Df){
a = one;
b = two;
c = three;
d = four;
e = five;
f = six;
g = seven;
D1 = Do;
D2 = Dt;
D3 = Dt3;
D4 = Df;
}

void write(int nombre){
	convert(nombre);
	Serial.println(nmb1);
	Serial.println(nmb2);
	Serial.println(nmb3);
	Serial.println(nmb4);
	switch(nmb1){
		case 0:
			break;
		case 1:
			one(D1);
			Serial.println("case 1 nmb1");
			break;
		case 2:
			two(D1);
			Serial.println("case 2 nmb1");
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7: 
			break;
		case 8:
			break;
		case 9:
			break;
	}
	delay(1000);
	switch(nmb2){
		case 0:
			break;
		case 1:
			one(D2);
			Serial.println("case 1 nmb2");
			break;
		case 2:
			two(D2);
			Serial.println("case 2 nmb2");
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7: 
			break;
		case 8:
			break;
		case 9:
			break;
	}
	delay(1000);
	switch(nmb3){
		case 0:
			break;
		case 1:
			one(D3);
			Serial.println("case 1 nmb3");
			break;
		case 2:
			two(D3);
			Serial.println("case 2 nmb3");
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7: 
			break;
		case 8:
			break;
		case 9:
			break;
	}
	delay(1000);
	switch(nmb4){
		case 0:
			break;
		case 1:
			one(D4);
			break;
		case 2:
			two(D4);
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7: 
			break;
		case 8:
			break;
		case 9:
			break;
	}
delay(1000);
}