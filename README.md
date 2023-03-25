# sev-seg  
Arduino library to control 7 segments displays.  

Installation :  
git clone the repo or download the code.  
Extract it and put it on the %appdata%/Local/Arduino/libraries folder  
All Done !  
Use it by including sev_seg.h  

Exemple :  
![image](https://user-images.githubusercontent.com/108541810/227641822-f3382761-a167-4200-8893-93876dbcc9b7.png)  
   
Functions:   
Defining the pins used by the 7 segment display :   
pin(pin_a, pin_b, pin_c, pin_d, pin_e, pin_f, pin_g, pin_D1, pin_D2, pin_D3, pin_D4); // Define the pins followin the image.  

Write a number on the 7 segment display :  
write(number);   

See example for more info
