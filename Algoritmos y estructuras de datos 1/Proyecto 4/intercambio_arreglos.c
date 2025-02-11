#include <stdio.h>

void intercambiar(int a[], int tam, int i, int j){
    int r;
    r=a[i];
    a[i]=a[j];
    a[j]=r;

}

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
int t,x,y;
     printf("Ingrese el largo del arreglo\n"); scanf("%d",&t);
     int a[t];
     pedirArreglo(a,t);
     printf("Ingrese las posiciones a cambiar\n"); 
    scanf("%d\n",&x);
    scanf("%d",&y);
    intercambiar(a,t,x,y);
    imprimeArreglo(a,t);
    return 0;
}