#include <main.h>

BYTE CONST Display[10]={0x080,0x0F1,0x044,0x060,0x031,0x022,0x002,0x0F0,0x000,0x030};
BYTE CONST Columnas[4]={0x00C,0x020,0x044,0x084};
//int dato[4]={5,9,6,3};
float numerico=56.13;
int dato[4];

void muestra(int dato[4]){
for (int i=0;i<4;i++) {
         PORTB=Columnas[i];
         PORTC=Display[dato[i]];
         DELAY_MS(10);
   }
   return;
}
void convertirdato(float numero){

int cifras[10];
   int cifras2[10];
   int i=0;
   int j=0;
   int aux=0;
   int aux2=0;
   
   aux=numero;
   aux2=(numero*100)-(aux*100);

   while (aux2>0) {
      cifras2[j]=aux2%10;
      aux2=aux2/10;
      j++;
   }
   while (aux>0) {
      cifras[i]=aux%10;
      aux=aux/10;
      i++;
   }
   dato[0]=cifras[1];
   dato[1]=cifras[0];
   dato[2]=cifras2[1];
   dato[3]=cifras2[0];

   return;
}


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



