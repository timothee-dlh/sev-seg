# sev-seg
Arduino library to control 7 segments displays.

![image](https://user-images.githubusercontent.com/108541810/227641822-f3382761-a167-4200-8893-93876dbcc9b7.png)

#include <sev_seg.h>
// Set all the pins following the connections of the diagram.
const int pin_a  = 2;
const int pin_b  = 3;
const int pin_c  = 4;
const int pin_d  = 5;
const int pin_e  = 6;
const int pin_f  = 7;
const int pin_g  = 8;
const int pin_DP  = 9;  // dot is not implemented yet
const int pin_D1  = 10;
const int pin_D2  = 11;
const int pin_D3  = 12;
const int pin_D4  = 13;

void setup() {
pin(pin_a, pin_b, pin_c, pin_d, pin_e, pin_f, pin_g, pin_D1, pin_D2, pin_D3, pin_D4); // follow the order of the pin.
 // Set all your pins to OUTPUT
  pinMode(pin_a, OUTPUT);
  pinMode(pin_b, OUTPUT);
  pinMode(pin_c, OUTPUT);
  pinMode(pin_d, OUTPUT);
  pinMode(pin_e, OUTPUT);
  pinMode(pin_f, OUTPUT);
  pinMode(pin_g, OUTPUT);
  pinMode(pin_D1, OUTPUT);
  pinMode(pin_D2, OUTPUT);
  pinMode(pin_D3, OUTPUT);
  pinMode(pin_D4, OUTPUT);
  pinMode(pin_DP, OUTPUT);
}


void loop() {
write(9876); // Print whatever number you want on your 7x4 segment display.
}
