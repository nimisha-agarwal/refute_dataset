/*compile-errors:e158_277955.c:5:13: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
        scanf("%d",n);
               ~~  ^
e158_277955.c:5:13: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
        scanf("%d",n);
                   ^
e158_277955.c:4:7: note: initialize the variable 'n' to silence this warning
        int n,i,sum,j;
             ^
              = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	int n,i,sum,j;
	scanf("%d",n);
	sum=0;
for(i=1;i<=n;i=i+1){
for(j=1;j<=i;j=j+1){
    printf ("%d",sum=sum+j);
	        
	    }
	}
	return 0;
}