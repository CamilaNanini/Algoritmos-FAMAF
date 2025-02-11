#include <stdio.h>
#include <assert.h>

struct div_t{
int cociente;
int resto;
};

struct div_t division (int x, int y){
    struct div_t aux;
 aux.cociente = x/y;
 aux.resto = x%y;
 printf("Cociente=%d\n",aux.cociente);
 printf("Resto=%d\n",aux.resto);
 return aux;
}

int main (void){
int a,b;
    printf("Ingrese el dividendo\n"); scanf("%d",&a);
    printf("Ingrese el divisor (debe ser distinto de 0)\n"); scanf("%d",&b);
 assert(b!=0);
 division(a,b);
    return 0;
}

