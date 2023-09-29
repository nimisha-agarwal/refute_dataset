/*execute-result:OK*/
/*compile-errors:e160_280465.c:31:2: warning: control may reach end of non-void function [-Wreturn-type]
}}
 ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int doplegengar()
{
    int N,c,i,x;
    int count=0;
scanf("%d\n",&N);

int	array[N];
	for(c=0;c<N;c++)
{
    scanf("%d ",&array[c]);
}
	for(x=0;x<N;x++)
	{
	    for(i=1;i>x&&i<N;i++)
	    {
	        if(array[x]==array[i])
	        {
	            printf("YES");
	            count=1;
	            break; 
	        }
	    
	    }
	 if(count==0)
	 {
	     printf("NO");
	 }
	          
	return count;
}}
int main()
{
    doplegengar();
return 0;
    
}