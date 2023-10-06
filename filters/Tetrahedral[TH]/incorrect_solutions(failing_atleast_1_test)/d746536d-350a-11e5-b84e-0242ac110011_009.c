/*execute-result:OK*/
/*compile-errors:e158_277968.c:4:6: warning: variable 'n' is used uninitialized whenever function 'main' is called [-Wsometimes-uninitialized]
        int n;
        ~~~~^
e158_277968.c:9:13: note: uninitialized use occurs here
        for (i=0;i<n;i++)
                   ^
e158_277968.c:4:7: note: initialize the variable 'n' to silence this warning
        int n;
             ^
              = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	int n;
	
	int sum;
	sum=0;
	int i;
	for (i=0;i<n;i++)
	{
	    scanf ("%d",&n);
	    n=(n*n+n)/2;
	    sum=sum+n;
	    
	}
	printf ("%d",sum);
	return 0;
}