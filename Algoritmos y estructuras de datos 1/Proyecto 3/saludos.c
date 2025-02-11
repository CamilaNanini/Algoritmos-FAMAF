#include <stdio.h>

void imprimeHola(void);
void imprimeChau(void);

int main (void){
	
	imprimeHola();
	imprimeHola();
	imprimeChau();
	imprimeChau();
	
	return 0;
}

void imprimeHola(void){
	printf("Hola\n");
}
void imprimeChau(void){
	printf("Chau\n");
}