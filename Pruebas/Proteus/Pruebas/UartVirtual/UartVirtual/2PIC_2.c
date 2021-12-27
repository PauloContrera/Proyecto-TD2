#include <16f887.h>
#fuses xt,nowdt
#use delay(clock=4000000)
#use rs232(baud=57600,xmit=pin_c6,rcv=pin_c7,bits=8)
#include <lcd.c>


char valor;
int i=0; //Posicion del dato recibido a mostrar en el LCD
int ban=0; //Bandera que indica que llego un dato

//Define la interrupción por recepción Serial
#int_RDA
RDA_isr()
{
  valor=getc(); //Captura el dato recibido del PIC 1
  ban=1; //Indica que llego un dato
  i=i+1; //Incrementa en 1 la posicion del LCD
  if(i>16)
  {
   i=0;
   LCD_PUTC("\f");   //Borrar el contenido del LCD
   lcd_gotoxy(1,1);
   lcd_putc("Recibido=");
  }
}

void main()
{
 lcd_init();   //Inicializa el LCD
 enable_interrupts(INT_RDA); //HAbilita interrupcion por puerto serial
 enable_interrupts(GLOBAL);  // Habilita las interrupcciones globales
 lcd_gotoxy(1,1);
 lcd_putc("Recibido=");
 for(;;)
 {
  if(ban==1) //Hay datos para mostrar
  {
   lcd_gotoxy(i,2);
   printf(lcd_putc,"%c",valor);
   ban=0; //Sale de la impresion del LCD
  }
 }
}
