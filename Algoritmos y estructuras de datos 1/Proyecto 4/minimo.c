#include <stdio.h>
#include <assert.h>

int main (void){
    int x,y,res;
    printf("Ingrese x\n"); scanf("%d",&x); 
    printf("Ingrese y\n"); scanf("%d",&y);
 assert(x>=y || x<y);
 if (x>=y){
    res = x;
    printf ("El valor mayor es %d",res);
 }
 else{
      res = y;
   printf ("El valor mayor es %d",y);
   }
 assert(res == x || res == y); 
    return 0;
}