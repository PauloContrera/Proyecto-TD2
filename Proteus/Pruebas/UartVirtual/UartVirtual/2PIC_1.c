#include <16f887.h>
#fuses xt,nowdt
#use delay(clock=4000000)

#use rs232(baud=57600, xmit=PIN_c6,rcv=PIN_c7,stream=PIC,parity=N, bits=8)
#use rs232(baud=9600,xmit=PIN_D0,rcv=PIN_D1,stream=PC, parity=N, bits=8)


void main()
{
 char c;
 fprintf(PC,"Digite lo que desea mandar al Segundo PIC: \r\n");
 while(1)
 {
  c=fgetc(PC); // lee desde el computador
  fprintf(PC,"%c",c); //Muestra el Caracter recibido en el PC
  fprintf(PIC,"%c",c); //Manda el caracter al segundo PIC
 }

}
