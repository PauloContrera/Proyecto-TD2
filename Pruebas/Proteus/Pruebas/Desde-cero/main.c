#include <main.h>

//BYTE CONST Display[10]={0x080,0x0F1,0x044,0x060,0x031,0x022,0x002,0x0F0,0x000,0x030};
//BYTE CONST Columnas[4]={0x00C,0x020,0x044,0x084};
//int dato[4]={5,9,6,3};




void main()
{
   SET_TRIS_C(0000000);
   SET_TRIS_B(00000000);
   PORTB=0;
   PORTA=0;
   int d[4];
   while(TRUE)
   {
   convertirdato(numerico);
   muestra(dato);

   }

}



