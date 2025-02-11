#include <stdio.h>
#include <limits.h>

struct comp_t {
int menores;
int iguales;
int mayores;
};

struct comp_t cuantos(int a[], int tam, int elem){
 struct comp_t aux;
 int i=0,res1=0,res2=0,res3=0;
 do{
    if (elem>a[i]){
  res1= 1 + res1;
    }
    if (a[i]>elem){
  res2= 1 + res2;
    }
    if (elem==a[i]){
 res3= 1 + res3;
    }
    else{;}
 i=i+1;
 }while(i<tam);
 aux.mayores= res1;
 aux.menores= res2;
 aux.iguales= res3;
 printf ("La cantidad de numeros mayores son %d\n",res1);
 printf ("La cantidad de numeros menores son %d\n",res2);
 printf ("La cantidad de numeros iguales son %d\n",res3);
    return aux;
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
int x,t;
 printf("Ingrese el largo del array\n"); scanf("%d",&t);
  printf("Ingrese elemento a comparar \n"); scanf("%d",&x);
 int a[t];
 pedirArreglo(a,t);
 cuantos(a,t,x);
    return 0;
}