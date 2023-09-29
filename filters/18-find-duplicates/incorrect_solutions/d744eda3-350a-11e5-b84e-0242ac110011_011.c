/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main()
{
    int N=0,i,j;
    //printf("enter size of array less than 50");
    scanf("%d\n",&N);
    int a[N];
    for( i=0;i<N;i++)
    {
        scanf("%d ",&a[i]);
    }
    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(a[i]==a[j])
            {
                printf("YES");
                
            }
            
            
        }
        
           printf("NO");
        
    }
    
	return 0;
}