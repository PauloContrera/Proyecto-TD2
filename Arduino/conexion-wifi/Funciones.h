float numero=40;
int d[6];
int aux2=0;
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

float pasarNumero(int a);

float redondear(float n){
  int aux3=0;
  aux3=n;
  int aux2=0;
  aux2=(n-aux3)*10;
  if((aux2>=5)){
    n=aux3+0.5;
  }else{
    n=aux3;
  }
  return n;
}
int convertirDato(float a){
  
    if(a>=38){
    a=37.9;
  }
  else if(a<=22){
    a=22;
  }
  return redondear(a)*2-44;
}
void pasarbinario(int b){
  int i, c=0;
  for ( i=0;i<4;i++) {
    d[i]=b%2;
    b=b/2;
  }
  d[4]=b;
}
