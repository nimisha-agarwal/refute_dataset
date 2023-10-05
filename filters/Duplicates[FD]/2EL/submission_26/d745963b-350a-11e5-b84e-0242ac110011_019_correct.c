/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main(){
	int N,c=0;   //N is array size,c is a variable used in the program
	scanf("%d\n",&N);
	int a[N];
	for (int i=0;i<N;i++)
	{
	    scanf("%d",&a[i]);//accepting the array entries
	}
	for (int k=0;k<N;k++)
	{
	    for(int j=0;j<N;j++)
	    {
	        if(a[k]==a[j]) //one array entry's equality is checked with                             other array entries including itself
	        c=c+1;      //c counts the number of times the equality is                         satisfied
	    }
	}
	if (c>=N+1)
	{
	    printf("YES\n");
	}
    else
    {
        printf("NO\n");
    }
	return 0;
}