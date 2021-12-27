#include <18f2550.h>
#use delay(clock=400000)
#use rs232(baud=300, xmit=PIN_c6,rcv=PIN_c7,stream=PiC)
int i=0;
void main()
{
fprintf(PiC,"%dHola",i); //Manda el caracter al segundo PIC
i++;
}
