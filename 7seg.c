/*
 * File:   counter sevensegment 
 * Author: Mohamed Hamdi
 *please visit my youtube channel:https://www.youtube.com/channel/UCzt_0MFbJiT93KSR74pW6Jw
 *
 */

#include <xc.h>
#include "confg.h"
#define _XTAL_FREQ 4000000
unsigned char counter = 10 ;     // pointer to speciefic one value from array
void main(void) {
    //-----------------seven segment code in intial array-----------------------
    unsigned char segments_code [10] = {0xFC,0x60,0xDA,0xF2,0x66,0xB6,0xBE,0xE0,0xFE,0xF6};
    unsigned char counter = 10 ;    // pointer to speciefic one value from array
    TRISB =0x00 ;                   // SET TRISB AN OUTPUT
    PORTB =0x00 ;                   //SET INTIAL VALUE LOW FOR PORTB
    while(1)
    {
         PORTB = segments_code [counter]; 
        counter++;
        if(counter == 10)
        {
         counter =0;
         __delay_ms(1000); 
        }
    }
      

    return;
}
