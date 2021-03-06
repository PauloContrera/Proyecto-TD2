#include <18F2550.h>
#device ADC=10
#FUSES XT, NOWDT, PUT, NOMCLR,BROWNOUT,NOLVP                    //No Watch Dog Timer
//#use delay(internal=4MHz)
#use delay(internal=4Mhz,clock_out)


//BYTE CONST Display[10]={0x020,0x073,0x082,0x042,0x051,0x044,0x004,0x072,0x000,0x050};
BYTE CONST Display[10]={0x000,0x013,0x022,0x012,0x011,0x014,0x004,0x012,0x000,0x010};
BYTE CONST DisplayB[10]={0x020,0x070,0x080,0x040,0x050,0x040,0x000,0x070,0x000,0x050};
BYTE CONST ColumnasA[4]={0x024,0x010,0x005,0x00C};

BYTE CONST Leds[8]={0x020,0x070,0x080,0x040,0x050,0x040,0x000,0x070};
//BYTE CONST ColumnasB[4]={0x004,0x000,0x004,0x014};
int dato[4];
float numerico=0 ;

#DEFINE LED PORTB,0
#byte PORTC= 0xf82
#byte PORTB= 0xf81
#byte PORTA= 0xf80

#byte TRISA=0xf92 


void muestra(int dato[4]){
for (int i=0;i<4;i++) {
         PORTA=ColumnasA[i];
         //PORTB=ColumnasB[i];
         PORTC=Display[dato[i]];
         //PORTC=0x0030;
         PORTB=DisplayB[dato[i]];
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
