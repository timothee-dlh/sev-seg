#include "Arduino.h"
#include "number.h"
#include "sev_seg.h"
int nmb1, nmb2, nmb3, nmb4;
int a, b, c, d, e, f, g, D1, D2, D3, D4, DP;

void convert(int number){
	if(number > 9999){
	number = 0000;}
	int digits[4];
  for (int i = 3; i >= 0; i--) {
    digits[i] = number % 10; 
    number /= 10; 
  }
  	if (nmb1 > 9 || nmb1 < 0) {nmb1 = 0;}
	if (nmb2 > 9 || nmb2 < 0) {nmb2 = 0;}
	if (nmb3 > 9 || nmb3 < 0) {nmb2 = 0;}
	if (nmb4 > 9 || nmb4 < 0) {nmb2 = 0;}
nmb4 = digits[3];
nmb3 = digits[2];
nmb2 = digits[1];
nmb1 = digits[0];

	
}

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
	switch(nmb1){
		case 1:
			one(D1);
			break;
		case 2:
			two(D1);
			break;
		case 3:
			three(D1);
			break;
		case 4:
			four(D1);
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
		default:
			zero(D1);
			break;
	}
	clear();
	switch(nmb2){
		case 1:
			one(D2);
			break;
		case 2:
			two(D2);
			break;
		case 3:
			three(D2);
			break;
		case 4:
			four(D2);
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
		default:
			zero(D2);
			break;
	}clear();
	switch(nmb3){
		case 1:
			one(D3);
			break;
		case 2:
			two(D3);
			break;
		case 3:
			three(D3);
			break;
		case 4:
			four(D3);
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
		default:
			zero(D3);
			break;
	}clear();
	switch(nmb4){
		case 1:
			one(D4);
			break;
		case 2:
			two(D4);
			break;
		case 3:
			three(D4);
			break;
		case 4:
			four(D4);
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
		default:
			zero(D4);
			break;
	}clear();
}