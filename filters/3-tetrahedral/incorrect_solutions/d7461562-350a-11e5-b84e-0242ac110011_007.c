/*compile-errors:e158_277955.c:8:18: warning: variable 'sum' is uninitialized when used here [-Wuninitialized]
    printf ("%d",sum);
                 ^~~
e158_277955.c:4:13: note: initialize the variable 'sum' to silence this warning
        int n,i,sum,j;
                   ^
                    = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	int n,i,sum,j;
	scanf ("%d",&n);
for(i=1;i<=n;i=i+1){
for(j=1;j<=i;j=j+1){
    printf ("%d",sum);
	        
	    }
	}
	return 0;
}