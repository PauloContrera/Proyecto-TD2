#include "DHT22.h"
#include "Funciones.h"
#define D0 5
#define D1 4
#define D2 0
#define D3 2
#define D4 14

int sal[5]={D0,D1,D2,D3,D4};

void salidas(int a,int b){
  if(a==1){
    digitalWrite(b,HIGH);
  }
  else{
    digitalWrite(b,LOW);
  }
}
void setup() {
  Serial.begin(115200);
  pinMode(D0,OUTPUT);
  pinMode(D1,OUTPUT);
  pinMode(D2,OUTPUT);
  pinMode(D3,OUTPUT);
  pinMode(D4,OUTPUT);
}

void loop() {
  //numero=t;
  delay(100);
  aux2=convertirDato(numero);
  pasarbinario(aux2);
 
  for (int i=0;i<5;i++) {
        salidas(d[i],sal[i]);
  }


  delay(1000);
  }
