/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() 
{
	int n[50];//an array of size 50 element
	int i,j,N,a=0;
	scanf("%d\n",&N);//read size of array
	for(i=0;i<N;i++)
	{
	    scanf("%d",&n[i]);//read element of array
	}
	for(i=0;i<N;i++)
	{
	    for(j=i+1;j<N;j++)
	    {
	        if(n[i]==n[j])//2 values are same i.e. duplicate value
	        {
	            a=a+1;
	            printf("YES");
	        }
	    }
	}
	if(a==0)//means no duplicate value i.e. no two value are same
	{
	    printf("NO");
	}
	return 0;
}