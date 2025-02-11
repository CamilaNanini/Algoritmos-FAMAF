#include <stdio.h>
#include <stdbool.h> 

bool pedirBooleano(void);
void imprimeBooleano(bool x);

int main (void){
	int x,i;
	bool res;
	
	printf ("Ingrese x\n");scanf("%d",&x);
	printf ("Ingrese i\n");scanf("%d",&i);
	res=pedirBooleano();
	i=2; res=1;
do{
 res=res && ((x % i) != 0);
    i = i + 1;
    printf("Las variables son x=%d i=%d\n",x,i);
} while (i < x && res);
	return 0;
}

bool pedirBooleano(void){
	bool y;
	printf ("Ingrese Verdadero (1) o Falso(0)\n");scanf("%d",&y);
	return y;
}

void imprimeBooleano(bool x){
	if (x==0){
		printf ("Falso");
	}
	else{
		if(x==1){
			printf ("Verdadero");
		}
		else{
			printf ("Valor no definido");
		}
		
	}
}
