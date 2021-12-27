#include <18f2550.h>
#use delay(clock=400000)
#use rs232(baud=300, xmit=PIN_c6,rcv=PIN_c7,stream=PiC)

void main()
{
int i=0;
 for(;;)
 {
 
fprintf(PiC,"Hola mundo%d\r\n",i);
i++;
delay_ms(100);

 }
}
