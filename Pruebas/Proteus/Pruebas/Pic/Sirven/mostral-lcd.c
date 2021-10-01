
#include <18F2550.h>
#device ADC=10

#FUSES NOWDT                    //No Watch Dog Timer

#use delay(internal=4MHz)

# define lcd_rs_pin     pin_b7  // esto es en caso de que yo quiero especificar los pines que yo quiero utilizar
# define lcd_rw_pin     pin_b1
# define lcd_enable_pin pin_b6
# define lcd_data4      pin_b5
# define lcd_data5      pin_b4
# define lcd_data6      pin_b3
# define lcd_data7      pin_b2

# include <lcd.c>
void main (){
set_tris_b(0);
lcd_init();
float temperatura=10.53;
while (true){
lcd_gotoxy (1,1);                       //Uvicamos la palabra en la primera fila y la primera columna
printf(lcd_putc, "  Temp. %2.2f", temperatura);

/*
delay_ms(5000);//Delay
lcd_putc("\f");//Para Borrar la pantalla
lcd_gotoxy (1,2);                       //Uvicamos la palabra en la segunda fila y la primera columna
printf(lcd_putc, "asd");
*/

}
}
