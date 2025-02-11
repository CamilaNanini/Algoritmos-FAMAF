#include <stdio.h>
#include <assert.h>
#include <limits.h>
#define N 3

int minimo_pares(int a[], int tam){
  int m=INT_MAX,i=0;
  while (i<tam)
  if(a[i]<m && a[i]%2==0){
  m= a[i];
  } else {;}
  i=i+1;
  return m;
}


int minimo_impares(int a[], int tam){
  int m=INT_MAX,i=0;
  while (i<tam)
  if(a[i]<m && a[i]%2==1){
  m= a[i];
  } else {;}
  i=i+1;
  return m;
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
    int a[3];
    pedirArreglo(a,3);
    printf("Min pares %d",minimo_pares(a, 3));
    printf("Min impares %d",minimo_impares(a, 3));
    return 0;
}