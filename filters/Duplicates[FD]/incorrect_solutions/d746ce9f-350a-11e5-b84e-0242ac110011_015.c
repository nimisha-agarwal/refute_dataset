/*compile-errors:e160_280528.c:5:8: warning: variable 'N' is uninitialized when used here [-Wuninitialized]
        int a[N];
              ^
e160_280528.c:4:7: note: initialize the variable 'N' to silence this warning
        int N,i=0,j;
             ^
              = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int N,i=0,j;
	int a[N];
	scanf("%d\n",&N);
	if(N<50)
	{
	    while(i<N)
	    {
	        scanf("%d ",&a[i]);
	        i++;
	    }
	    
	    for(i=0;i<N;i++)
	    {
	        for(j=0;(j<=N)&&(j!=i);j++)
	        {
	            if(a[i]==a[j])
	            {
	                printf("YES\n");
	                break;
	            }
	            else
	            {
	                continue;
	            }
	        }
	     printf("NO\n");
	    }
	}
	else
	{
	    printf("please give a number less than 50");
	}
	return 0;
}