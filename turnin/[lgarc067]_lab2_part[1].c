/*	Author: lab
 *  Partner(s) Name: Luis
 *	Lab Section:
 *	Assignment: Lab #2  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    //Insert DDR and PORT initializations 
    DDRA = 0x00; PORTA = 0xFF;
    DDRB = 0xFF; PORTB = 0x00;
    unsigned char tmp = 0x00;
    unsigned char tmp1 = 0x00;
    unsigned char tmp2 = 0x00; 

	//DDRB = 0xFF; // Configure port B's 8 pins as outputs
	//PORTB = 0x00; // Initialize PORTB output to 0’s

	
    /* Insert your solution below */
    while (1) { //test
	tmp = PINA & 0x01;
 	tmp1 = PINA & 0x02;
 	   if( tmp == 0x01 && tmp1 == 0x00)
 	   {
 		   tmp2 = (tmp2 & 0xFE) | 0x01;
 	   }
 	   else
 	   {
 		   tmp2 = (tmp2 & 0xFE) | 0x00;
 	   }
 	   PORTB = tmp2; 

			//PORTB = 0x0F;
    }
    return 1;
}

