#include <iostream>
#include <stdio.h>
using namespace std;
/*
void pasarbinario(int b){
	int i, c=0;
	if(b>=38){
		b=38;
	}
	else if(b<=22){
		b=22;
	}
	b=b-20;
	//c=pasarNumero(b);
	for ( i=0;i<4;i++) {
		d[i]=c%2;
		c=c/2;
	}
	d[4]=c;
}*/
float redondear(float n);
int convertirDato(float a);
int main(int argc, char *argv[]) {
	float n=22;
	float a=n;
	int i=0;
	for (int i=0;i<32;i++) {
		printf("\nEl valor dado es %f y le di %f y convertido queda %d",n,a,i);
		i=convertirDato(n);
		n=n+0.2;
	}
}
int convertirDato(float a){
	return redondear(a)*2-44;
}
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
/*
int pasarNumero(float a){
	switch (a) {
	case 22:
		return 0;
		break;
	case 22.5:
		return 1;
		break;
	case 23:
		return 2;
		break;
	case 23.5:
		return 3;
		break;
	case 24:
		return 4;
		break;
	case 24.5:
		return 5;
		break;
	case 25:
		return 6;
		break;
	case 25.5:
		return 7;
		break;
	case 26:
		return 8;
		break;
	case 26.5:
		return 9;
		break;
	case 27:
		return 10;
		break;
	case 27.5:
		return 11;
		break;
	case 28:
		return 12;
		break;
	case 28.5:
		return 13;
		break;
	case 29:
		return 14;
		break;
	case 29.5:
		return 15;
		break;
	case 30:
		return 16;
		break;
	case 30.5:
		return 17;
		break;
	case 31:
		return 18;
		break;
	case 31.5:
		return 19;
		break;
	case 32:
		return 20;
		break;
	case 32.5:
		return 21;
		break;
	case 33:
		return 22;
		break;
	case 33.5:
		return 23;
		break;
	case 34:
		return 24;
		break;
	case 34.5:
		return 25;
		break;
	case 35:
		return 26;
		break;
	case 35.5:
		return 27;
		break;
	case 36:
		return 28;
		break;
	case 36.5:
		return 29;
		break;
	case 37:
		return 30;
		break;
	case 37.5:
		return 31;
		break;
	case 38:
		return 32;
		break;
	};
}
*/
