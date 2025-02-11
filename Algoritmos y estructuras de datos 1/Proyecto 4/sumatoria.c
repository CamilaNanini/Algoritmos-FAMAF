#include <stdio.h>
#define N 4

int sumatoria(int a[], int tam){
 int res,i; res=0;i=0; 
 do{
   res=res+a[i]; 
   i=i+1;
 }while(i<tam);
    return res;
}

void pedirArreglo(int a[], int n_max){
  int i,e;i=0;
  do{
    printf("Ingrese el valor para el lugar %d\n",i); scanf("%d",&e);
    a[i]=e;
    i=i+1;
  } while(i<n_max);
}

int main (void){
    int y,x; y=0; x=0;
 int a[4];
 pedirArreglo(a,4);
 printf("El resultado es %i\n", sumatoria(a,4));
    return 0;
}

