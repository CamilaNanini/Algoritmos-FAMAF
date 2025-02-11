#include <stdio.h>
#include <assert.h>

int main (void){
    int x,res;
    printf("Ingrese x\n"); scanf("%d",&x); 
 assert(x>=0 || x<0);
 if (x>=0){
 res=x;
 printf("El valor absoluto es %d\n",res); 
 }
 else{
    res=(-x);
    printf("El valor absoluto es %d\n",res); 
 }
 assert(res==x || res==(-x)); 
    return 0;
}