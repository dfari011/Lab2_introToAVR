/*	Author: Dhruvi Faria (dfari011)
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #2  Exercise #3
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#include <stdio.h>
#include <stdlib.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
  	DDRA, DDRB, DDRC, PORTD = 0x00; 
	PORTA, PORTB, PORTC, DDRD = 0xFF;
	unsigned char tmpA, tmpB, tmpC, tmpD, total = 0x00;
    
    while (1) {

	tmpA = PINA;
	tmpB = PINB;
	tmpC = PINC;
				
	total = tmpA + tmpB +tmpC;

	tmpD = total >> 2; 	
	tmpD = tmpD & 0xFC; 

	if (total > 140){
		tmpD = tmpD | 0x01; 
	}

	if(abs(tmpA - tmpC) > 80){
		tmpD = tmpD | 0x02; 
  	}
	
	PORTD = tmpD;
	} 
    return 1;
}
