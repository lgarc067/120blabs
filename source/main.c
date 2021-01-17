/*	Author: lab
 *  Partner(s) Name: Luis
 *	Lab Section:
 *	Assignment: Lab #2  Exercise #2
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
 #include <avr/io.h>
 #ifdef _SIMULATE_
 #include "simAVRHeader.h"
 #endif
 int main(void)
 {
 	DDRA = 0x00; PORTA = 0xFF;
 	DDRB = 0xFF; PORTB = 0x00;

 	unsigned char tmp0 = 0x00;
 	unsigned char tmp1 = 0x00;
 	unsigned char tmp2 = 0x00;
 	unsigned char tmp3 = 0x00;
 	unsigned char cntavail = 4;

 	while(1) {

 		tmp0 = PINA  & 0x01;
 		tmp1 = PINA & 0x02;
 		tmp2 = PINA & 0x04;
 		tmp3 = PINA & 0x08;

	if(tmp0 == 0x01) { --cntavail; }

 	if(tmp1 == 0x02) { --cntavail; }

 	if(tmp2 == 0x04) { --cntavail; }

 	if(tmp3 == 0x08) { --cntavail; }

 		PORTC = cntavail;
    	cntavail = 4;
 	}
	return 1;
 }
