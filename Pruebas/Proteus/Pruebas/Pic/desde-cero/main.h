#include <18F2550.h>
#device ADC=10


#FUSES XT, NOWDT, PUT, NOMCLR,BROWNOUT,NOLVP                    //No Watch Dog Timer

//#use delay(internal=4MHz)
#use delay(internal=4Mhz,clock_out)

#DEFINE LED PORTB,0
#byte PORTC= 0xf82
#byte PORTB= 0xf81
#byte PORTA= 0xf80
