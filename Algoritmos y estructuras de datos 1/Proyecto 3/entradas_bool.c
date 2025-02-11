#include <stdio.h>
#include <stdbool.h> 

bool pedirBooleano(void);
void imprimeBooleano(bool x);

int main (void){
	
	imprimeBooleano (pedirBooleano());
	
	return 0;
}

bool pedirBooleano(void){
	int y;
	bool x;
	printf ("Ingrese Verdadero (1) o Falso(0)\n");scanf("%d",&y);
	x= (bool) y;
	return x;
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