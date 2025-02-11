#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

bool esPrimo (int x){
 int i = 0, r = 0;
 bool res = false;
 while (i<=x){
i=i+1;
if(x%i==0){
    r=r+1;
}
 }
 res= res||r==2;
    return res;
}

int nesimo_primo (int N){
int res2=2, cuentaprim=0;
while(cuentaprim <= N){
if (esPrimo (res2)) {
cuentaprim=cuentaprim+1;
}
res2=res2+1;
}
res2=res2-1;
    return res2;
}

int main (void){
int N,res;
printf("Ingrese un entero\n");scanf("%d",&N);
assert(N>=0);
res=nesimo_primo(N);
printf("El primo numero %d es %d\n",N,res);
    return 0;
}