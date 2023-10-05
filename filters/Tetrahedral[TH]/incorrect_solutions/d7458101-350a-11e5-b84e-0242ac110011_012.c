/*compile-errors:e158_277920.c:8:8: warning: variable 't' is uninitialized when used here [-Wuninitialized]
     t=t+j;
       ^
e158_277920.c:4:16: note: initialize the variable 't' to silence this warning
    int n,i,j,t;
               ^
                = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
    int n,i,j,t;
    scanf ("%d",&n);
    for (i=1;i<=n;i++)
     j=i*(i+1)/2;
     t=t+j;
     
     
        
	return 0;
}