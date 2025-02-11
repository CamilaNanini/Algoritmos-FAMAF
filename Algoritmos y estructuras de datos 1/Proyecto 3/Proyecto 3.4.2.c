#include <stdio.h>

int main (void){
	int x,y,z,m;
	
	printf ("Introduzca x\n"); scanf("%d", &x);
	printf ("Introduzca y\n"); scanf("%d", &y);
	printf ("Introduzca z\n"); scanf("%d", &z);
	printf ("Introduzca m\n"); scanf("%d", &m);
	
if(x<y){ 
m=x;
}
else{
if(x>=y){
m=y;
}
else{;
}
}

printf("El estado medio es x=%d,y=%d,z=%d,m=%d\n",x,y,z,m);

if(m<z){;
}
else{
if(m>=z){
m=z;
	}
else{;
}
}

printf("El estado final es x=%d,y=%d,z=%d,m=%d",x,y,z,m);

	return 0;
}

//Este programa ve cuales de las variables dadas (x,y,z) es mayor y 
//guarda el resultado en la variable "m". Por otro lado dependiendo 
//del estado inicial de las variables m puede terminar con el mismo
//valor de x,y o z
