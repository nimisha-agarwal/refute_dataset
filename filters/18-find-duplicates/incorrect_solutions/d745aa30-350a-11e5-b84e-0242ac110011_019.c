/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int N,i,j;
	scanf("%d",&N);
	int num[N];
	for (N=0;N<50;N++)
	{
	   scanf("%d",&num[N]); 
	}
	for(i=0;0<=i&&i<50;i++)
	{
	   for(j=0;0<=j&&j<50;j++)
	       {
	         if(num[i]==num[j]&&i!=j)
	             { printf("YES\n");
	              }
	          else
	             {printf("NO\n");
	             }
	       }
	}
	             
	 return 0;
}