#include <stdio.h>

//Prototipos de funciones
int pedirEntero(void);
void imprimeEntero(int x);

int main (void){
	
imprimeEntero (pedirEntero());

return 0;
}

int pedirEntero(void){
	int x;
	printf("Ingrese un numero\n");scanf("%d",&x);	
	return x;
}

void imprimeEntero(int x){
  printf("Ingreso %d",x);
}