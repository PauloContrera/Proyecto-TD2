#include <main.h>
//74880
 #use rs232(baud=9600, xmit=PIN_c6,rcv=PIN_c7,stream=PiC)
 #use rs232(baud=9600,xmit=PIN_c4,rcv=PIN_c5,stream=PC)
//int dato[4]={5,9,6,3};

/*const _myAdress=0x04;

void I2C_Send(unsigned short _adress,unsigned short c1,unsigned short c2){
I2C1_Start();
I2C1_Wr(_adress);
I2C1_Wr(c1);
I2Cl_Wr(c2);
I2C1_Stop();
Delay_ms(10);
}
*/
int o=1;
char a;
void main(){
  SET_TRIS_C(0xff0);
   SET_TRIS_B(00000000);
   SET_TRIS_A(00000000);
   PORTB=0;
   PORTA=0;
   //I2C1_Init(100000);
   delay_ms(10);
   int d[4];
   while(TRUE)
   {
   //numerico=numerico+0.03;
   //convertirdato(numerico);
   ///muestra(dato);
   //fprintf(PiC,"Dato: %c%c%c\n\n",c[0],c[1],c[2]); //Manda el caracter al segundo PIC
  // a=fgetc(PiC);
    fprintf(PiC,"%d",o); //Manda el caracter al segundo PIC
   //fprintf(PiC,"\n%d Hola-->",o); //Manda el caracter al segundo PIC
   
   //c[1]=fgetc(PiC); 
   //c[2]=fgetc(PiC); 
   //fprintf(PiC,"\n%d Hola-->",o); //Manda el caracter al segundo PIC
  
   PORTB=Leds[convierte(a)];
   
   }

}



