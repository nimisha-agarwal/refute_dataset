/*compile-errors:e158_277910.c:7:13: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
        scanf("%d",n);
               ~~  ^
e158_277910.c:7:13: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
        scanf("%d",n);
                   ^
e158_277910.c:5:10: note: initialize the variable 'n' to silence this warning
    int n,i,j;
         ^
          = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	//Enter your code here
    int n,i,j;
    int sum,term;
	scanf("%d",n);
	for(i=1;i<=n;i=i+1){for(j=1;j<=n;j=j+1)
	           {sum=0;
	           sum=sum+j;
	           }	
         term=0;
	term=term+sum;
	}
	printf("%d",term);
	
	
	
	
	
	
	return 0;
}