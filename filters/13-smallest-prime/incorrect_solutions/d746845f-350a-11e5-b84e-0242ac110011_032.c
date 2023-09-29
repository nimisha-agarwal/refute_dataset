/*compile-errors:e158_278355.c:6:12: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
    if(Num =1)
       ~~~~^~
e158_278355.c:6:12: note: place parentheses around the assignment to silence this warning
    if(Num =1)
           ^
       (     )
e158_278355.c:6:12: note: use '==' to turn this assignment into an equality comparison
    if(Num =1)
           ^
           ==
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int primecheck(int Num){
    int i;
for(i=2;i<Num;i++)
{
    if(Num =1)
    printf("%d",2);
}
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
    
    
    
        
    
