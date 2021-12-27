void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
}
int i=0;
char convierte(int c){
switch (c) {
   case 1: return '1';

   default: return 7;
      
   };
}
void loop() {
  // put your main code here, to run repeatedly:
//Serial.print(convierte(i));
//delay(100);
i++;
if(i>7){
  i=0;
}
}
