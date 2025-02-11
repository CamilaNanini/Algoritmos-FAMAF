#include <stdio.h>
#include <stdbool.h>
#define N 3

bool existe_positivo(int a[], int tam){
int i=0 ; bool e=0;
while (i<tam){
    e=a[i]>0||e;
    i=i+1;
}
    return e;
}

bool todos_positivos(int a[], int tam){
int i=0; bool e=1;
while (i<tam){
    e =a[i]>0 && e;
    i=i+1;
}
    return e;
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
int r;
int a[3];
pedirArreglo (a,3);
 printf("Ingrese que funcion quiere hacer 1(para todos) o 2 (existe)\n"); scanf("%d",&r);
 if(r==1){
if (1== todos_positivos(a,3)) {
    printf("Si son todos positivos\n");
}
else{
    printf("No son todos positivos\n");
}
 }
 else{
if (1== existe_positivo(a,3)) {
    printf("Si existe algo positivo\n");
}
else{
    printf("No existe algo positivo\n");
}
 }
    return 0;
}

