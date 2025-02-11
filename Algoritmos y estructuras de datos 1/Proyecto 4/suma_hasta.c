#include <stdio.h>
#include <assert.h>

int suma_hasta(int N);

int main (void){
 int x,y;
 printf("Ingrese un valor positivo\n"); scanf("%d",&x); 
 assert (x>0);
 y=suma_hasta(x);
 printf("El resultado de la sumatoria de todos los elementos antes que N=%d es %d",x,y); 
 assert (y>0);
    return 0;
}

int suma_hasta (int N){
 int res;
 res=0;
 do {
    res=res+N;
    N=N-1;
 }while (N>0);
    return res;
}