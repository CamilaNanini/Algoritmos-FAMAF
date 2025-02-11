#include <stdio.h>

int main (void) {
	char t;
	printf("Quiere hacer ejercicio h o i?\n") ;
	scanf("%c", &t);
if (t=='h'){
int x;
printf("Introduzca x\n"); scanf("%d", &x);
do{
	x=x-1;
	printf("Ahora la variable es %d\n",x);
} while (x !=0);
}
else{
if(t=='i'){
int x;
	printf("Introduzca x\n"); scanf("%d", &x);
do{
x=0;
printf("Ahora la variable es %d\n",x);
} while (x !=0);
}	
else{
	printf("Caso no considerado");
	}
}
return 0;
}
