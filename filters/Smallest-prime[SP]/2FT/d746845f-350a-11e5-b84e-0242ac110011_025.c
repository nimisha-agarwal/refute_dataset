/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int primecheck(int Num){
    int i;
for(i=2;i<Num;i++)
{
if (Num %i==0)
return 1;
}
return 0;
}
int main()
{
    int N;
    scanf("%d",&N);
    while(primecheck(N))
    {
        N=N+1;
    }

printf("%d",N);
return 0;
}
    
    
    
        
    
