#include <stdio.h>

void pedirArreglo(int a[], int n_max){
  int i,e;i=0;
  do{
    printf("Ingrese el valor para el lugar %d\n",i); scanf("%d",&e);
    a[i]=e;
    i=i+1;
  } while(i<n_max);
}

void imprimeArreglo(int a[], int n_max){
    int i;i=0;
do{
    printf("El valor del lugar %d es:\n",i);
    printf("%d\n",a[i]);
    i=i+1;
  } while(i<n_max);
}


int main (void){
    int t;
     printf("Ingrese el largo del arreglo\n"); scanf("%d",&t);
     int a[t];
     pedirArreglo(a,t);
    imprimeArreglo(a,t);

    return 0;
}
