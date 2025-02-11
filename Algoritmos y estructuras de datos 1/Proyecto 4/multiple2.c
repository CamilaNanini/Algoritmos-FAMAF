#include <stdio.h>
#include <assert.h>

int main (void){
    int x,y,z,X,Y,Z;
    printf("Ingrese x\n"); scanf("%d",&x); 
    printf("Ingrese y\n"); scanf("%d",&y); 
    printf("Ingrese z\n"); scanf("%d",&z); 
    X=x; Y=y; Z=z;
 assert(x == X && y == Y && z==Z );
  x = y;
  y = Y + X + Z; 
  z = Y + X;
   printf("Los valores finales son x=%d y=%d z=%d\n",x,y,z);
 assert( x == Y && y == Y + X + Z && z == Y + X); 
    return 0;
}
