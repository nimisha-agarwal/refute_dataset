/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int N,i,j;
	scanf("%d",&N);
	int num[N];
	for (i=0;i<N;i++)
	{
	   scanf("%d",&num[i]); 
	}
	for(i=0;0<=i&&i<N;i++)
	{
	   for(j=0;0<=j&&j<N;j++)
	       {
	         if(num[i]!=num[j])
	             { printf("NO\n");
	              }
	          else
	             {printf("YES\n");
	             }
	       }
	}
	             
	 return 0;
}