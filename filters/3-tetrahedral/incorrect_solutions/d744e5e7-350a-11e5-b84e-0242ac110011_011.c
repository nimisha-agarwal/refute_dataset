/*compile-errors:e158_277900.c:18:14: warning: variable 'sum' is uninitialized when used here [-Wuninitialized]
        printf("%d",sum);
                    ^~~
e158_277900.c:7:9: note: initialize the variable 'sum' to silence this warning
        int sum;
               ^
                = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	int i;
	int j;
	int k;
	int sum;
	scanf("%d",&j);
	for(i=1;i<=j;i++)
	{
	    int sum=0;
	    for(k=1;k<=i;k++)
	    {
	        sum=sum+k;

	    }
	}
	printf("%d",sum);
	return 0;
}