#include <stdio.h>

int main (void){
 char r;
 printf("Que ejercicio debo hacer a,b o c? \n"); scanf("%c", &r);
 if(r=='a'){
 	int x;
	printf("Introduzca x\n"); scanf("%d", &x);
	x=5;
	printf ("El resultado es %d",x);
 }
 else{
 	if(r=='b'){
     int x,y;
	printf("Introduzca x\n"); scanf("%d", &x);
	printf("Introduzca y\n"); scanf("%d", &y);
	
	printf ("El resultado final de (x+y),(2*y) es %d %d \n",(x+y),(2*y));
	 } 
else{
	 if(r=='c'){
     int x,y;
	 printf("Introduzca x\n"); scanf("%d", &x);
	 printf("Introduzca y\n"); scanf("%d", &y);
	 
	 printf ("El resultado final de (x+2*y),(2*y) es %d %d \n",(x+2*y),(2*y));
}
else{
	printf("Problema no definido, pruebe con los casos a,b o c");
}
	 
	 }
 }
	return 0;
}
	
