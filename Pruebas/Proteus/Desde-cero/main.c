#include <main.h>
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
void main()
{
   SET_TRIS_C(00000000);
   SET_TRIS_B(00000000);
   SET_TRIS_A(00000000);
   PORTB=0;
   PORTA=0;
   //I2C1_Init(100000);
   delay_ms(10);
   int d[4];
   while(TRUE)
   {
   numerico=numerico+0.03;
   convertirdato(numerico);
   muestra(dato);
   

   }

}



