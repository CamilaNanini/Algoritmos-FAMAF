#include <stdio.h>

int main (void) {
char d;
 printf ("Que ejercicio quiere ejecutar, e o f?\n"); scanf("%c", &d);
 
 if (d=='e'){
 int x,y;
  
  printf ("Ingrese x\n") ; scanf ("%d" ,&x);
  printf ("Ingrese y\n") ; scanf ("%d" ,&y);
  
  if(x>=y){
    x=0; printf("El estado final es x=%d y=%d",x,y);
  }
  else{
  	x=2;printf("El estado final es x=%d y=%d",x,y);
  }

 }
 else{
 	if (d=='f'){
  int x,y;
   printf ("Ingrese x\n") ; scanf ("%d" ,&x);
  printf ("Ingrese y\n") ; scanf ("%d" ,&y);
  if(x>=y){
    x=0; printf("El estado final es x=%d y=%d",x,y);
  }
  else{
  	x=2;printf("El estado final es x=%d y=%d",x,y);
  }
	 }
	 else{
	 	printf ("Ejercicio fuera de los parametros");
	 }
 }
  
return 0;
}



  
