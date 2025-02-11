#include <stdio.h>

int pedirEntero (void);
void imprimirEntero (int x);


int main (void){
	int x,y,z,m;
	printf("De el estado inicial, las variables se piden en el siguente orden: x,y,z,m \n");
	x = pedirEntero ();
	y = pedirEntero ();
	z = pedirEntero ();
	m = pedirEntero ();
	
	if (x<y){
		m=x;
	}
	else{
		m=y;
	}
	printf("Estado medio de las variables\n");
	imprimirEntero (x);
	imprimirEntero (y);
	imprimirEntero (z);
	imprimirEntero (m);
	if(m<z){
		;
	}
	else{
		m=z;
	}
	printf("Estado final de las variables\n");
	imprimirEntero (x);
	imprimirEntero (y);
	imprimirEntero (z);
	imprimirEntero (m);
	return 0;
}

int pedirEntero (void){
	int x;
	printf("Introduzca la variable\n"); scanf ("%d", &x);
	return x;
}


void imprimirEntero (int x){
	printf("El entero es %d\n",x);
}

// se podria definir otra funcion con el prototipo void estadoFinal (int x, int y, int z, int m) la cual 
// sea capaz de almacenar y devolver todos los valores de las variables. Seria de la forma:
// void estadoFinal (int x, int y, int z, int m) {
//  printf("El estado final de las variables es x=%d, y=%d, z=%d, m=%d",x,y,z,m)
//}
