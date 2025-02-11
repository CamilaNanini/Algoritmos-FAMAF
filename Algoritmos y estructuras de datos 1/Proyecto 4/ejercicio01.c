#include <stdio.h>
#include <assert.h>
void holaHasta(int n);

int main (void){
int x;
printf ("Ingrese x \n"); scanf("%d", &x);
assert (x>0);
holaHasta(x);
    return 0;
}

void holaHasta(int n){
    do {
    printf ("Hola \n");
    n=n-1;
    }while(n>0);
}