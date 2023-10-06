/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main()
{
    int N=0,i,j,k=0;
    //printf("enter size of array less than 50");
    scanf("%d\n",&N); //read N
    int a[N];
    for( i=0;i<N;i++)
    {
        scanf("%d ",&a[i]); 
    }
    for(i=0;i<N;i++)//comparing 1st no. with rest &2nd with rest except                         1 & so on                                
    {
        for(j=i+1;j<N;j++)
        {
            if(a[i]==a[j])// checking repeatition
            {
                printf("YES");
                k=1;//k=1 implies that duplication is detected 
            }
            
            
        }
    }    
        
    if(k!=1)//k!=1 implies no integer repeats
    {
        printf("NO");
        
        
    
    }
    return 0;       
        
}