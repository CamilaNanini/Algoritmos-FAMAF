#include <stdio.h>
#include <assert.h>

struct datos_t {
float maximo;
float minimo;
float promedio;
};


struct datos_t stats(float a[], int tam){
 int i=0;
 struct datos_t aux;
 assert(tam>0);
 aux.maximo = a[0];
 aux.minimo = a[0];
 aux.promedio = 0;
 while(i<tam){
    if (a[i] < aux.minimo){
      aux.minimo = a[i];
    }
    if (a[i] > aux.maximo){
      aux.maximo = a[i];
    }
    aux.promedio= a[i] + aux.promedio;
    i=i+1;
 }
 aux.promedio = aux.promedio/tam;
    return aux;
}

void pedirArreglo(float a[], int n_max){
  int i=0;
  float e;
  do{
    printf("Ingrese el valor para el lugar %d\n",i); scanf("%f",&e);
    a[i]=e;
    i=i+1;
  } while(i<n_max);
}

int main (void){
struct datos_t r; 
int t;
   printf("Ingrese el largo del arreglo\n"); 
   scanf("%d",&t);
    float a[t];
   pedirArreglo(a,t);
     r=stats(a,t);
    printf("El maximo es: %d\n",r.maximo);
    printf("El minimo es: %d\n",r.minimo);
    printf("El promedio es: %d\n",r.promedio);
    return 0;
}