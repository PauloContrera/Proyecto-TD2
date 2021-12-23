float numero=40;
int d[6];
int aux=0,aux2=0;
float pasarNumero(int a);

float redondear(float n){
  int aux=0;
  aux=n;
  int aux2=0;
  aux2=(n-aux)*10;
  if((aux2>=5)){
    n=aux+0.5;
  }else{
    n=aux;
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
