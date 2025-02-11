#include <stdio.h>
#include <stdbool.h> 

int main (void) {
int n;
printf("Busca ejecutar el programa 1 o 2\n"); scanf("%d", &n);

if(n==1){
int x,y,i ;
	printf("Introduzca x\n"); scanf("%d", &x);
	printf("Introduzca y\n"); scanf("%d", &y);
	printf("Introduzca i\n"); scanf("%d", &i);
i=0;
do{
	x = x - y;
	i = i + 1;
	printf("Las variables son x=%d y=%d i=%d\n",x,y,i);
}while(x>=y);
}
else{
	if(n==2){
int x,i;
bool res;
	printf("Introduzca x\n"); scanf("%d", &x);
	printf("Introduzca i\n"); scanf("%d", &i);
	printf("Introduzca res (tenga en cuenta que es un bool)\n"); scanf("%d", &res);
i=2; res=1;
do{
 res = res && ((x % i) != 0);
    i = i + 1;
    printf("Las variables son x=%d i=%d res=%d\n",x,i,res);
} while (i < x && res);
	}
	else{
		printf("Programa no posbile");
	}
	
}

return 0;
}

//Parte 3: deduccion de la funcionalidad de los programas:
//El programa 1:
//Comprueba cuantas veces x es mayor o igual a y (es decir funciona
//como un conteo), y guarda este resultado en i. Por eso al principio
//debe asignar i=0 o sino el conteo no seria efectivo.

//El programa 2:
//Comprueba cuales numeros son divisores de x, por eso las asignaciones al principio
//i=2 ya que todo numero es divisible por 1 y res=True pues neutro de la conjuncion.
