#include <main.h>
int d[5];
float numero=20;
void main(){
  SET_TRIS_C(0xff0);
   SET_TRIS_B(0X00f);
   SET_TRIS_A(00000000);
   PORTB=0;
   PORTA=0;
   delay_ms(10);
   int d[4];
   while(TRUE)
   
   {   
   d[0]=bit_test(PORTB,0);
   d[1]=bit_test(PORTB,1);
   d[2]=bit_test(PORTB,2);
   d[3]=bit_test(PORTB,3);
   d[4]=bit_test(PORTC,6);
   
   numero=22+(d[4]*16+d[3]*8+d[2]*4+d[1]*2+d[0]*1)*0.5;
   convertirdato(numero);
   muestra(dato);
   //delay_ms(10);
   }

}



