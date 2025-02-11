#include <stdio.h> 
int main (void){
 int x,y,z,r;
 
 printf("Introduzca variable x\n"); scanf ("%d", &x);
 
  printf("Introduzca variable y\n"); scanf ("%d", &y);
  
  printf("Introduzca variable z\n"); scanf ("%d", &z);
  
  printf("Introduzca operacion r, numeros del 1 al 5 \n"); scanf ("%d", &r);
  
  if (r==1) { 
 printf ("La operacion es x+y+1, entonces x=%d y=%d por lo que x+y+1=%d \n",x,y,x+y+1); 
  } 
  else{
  if (r==2) { 
 printf ("La operacion es z * z + y * 45 - 15 * x, entonces x=%d y=%d z=%d por lo que z * z + y * 45 - 15 * x=%d \n",x,y,z,z * z + y * 45 - 15 * x); 
  }
   else {
if (r==3) { 
int j;
j=(y - 2 == (x * 3 + 1) % 5);
 printf ("La operacion es y - 2 == (x * 3 + 1) %% 5, entonces x=%d y=%d z=%d por lo que \n",x,y,z); 
 if(j==0){
 	printf("Falso");
 }else{
 	printf("Verdadero");
 }
  } 
  else{
if (r==4) { 
 printf ("La operacion es y / 2 * x, entonces x=%d y=%d por lo que y / 2 * x=%d \n",x,y,y / 2 * x); 
  } 
  else{
if (r==5) { 
int u;
u=(y < x * z);
 printf ("La operacion es y < x * z, entonces x=%d y=%d, z=%d por lo que \n",x,y,z); 
 if(u==0){
 	printf("Falso");
 }
 else{
 	printf("Verdadero");
 }
  }
  else {
  	printf ("No hay operacion definida");
  }
  }
   }	
  }
  };
	return 0 ;
}

//Los rsultados del primer estado son: 
//Operacion 1= x=7 y=3 resultado de operacion=11
//Operacion 2= x=7 y=3 z=5 resultado de operacion=55
//Operacion 3= x=7 y=3 z=5 resultado de operacion=Falso
//Operacion 4= x=7 y=3 resultado de operacion=7
//Operacion 5= x=7 y=5, z=3 resultado de operacion=Verdadero
//Los rsultados del segundo estado son: 
//Operacion 1= x=1 y=10 resultado de operacion=12
//Operacion 2= x=1 y=10 z=8 resultado de operacion=499
//Operacion 3= x=1 y=10 z=8 resultado de operacion=Falso
//Operacion 4= x=1 y=10 resultado de operacion=5
//Operacion 5= x=1 y=10, z=8 resultado de operacion=Falso

//La ultima expresion del programa es del tipo bool.
