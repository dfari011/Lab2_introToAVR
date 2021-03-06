/*	Author: Dhruvi Faria (dfari011)
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #2  Exercise #1
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
    /* Insert DDR and PORT initializations */
	DDRA = 0x00;
	PORTA = 0xFF;
	DDRB = 0xFF;
	PORTB = 0x00;
	
	unsigned char tmpB = 0x00;
	unsigned char tmpA1;
	unsigned char tmpA0;
 
    /* Insert your solution below */
    while (1) {
	tmpA1 =  PINA & 0x02;
	tmpA0 = PINA & 0x01;

	if ((tmpA1 == 0x00) && (tmpA0 == 0x01)) { 
		tmpB = 0x01;
        } else {
		tmpB = 0x00;
	}
	PORTB = tmpB;	
   }
    return 1;
}
