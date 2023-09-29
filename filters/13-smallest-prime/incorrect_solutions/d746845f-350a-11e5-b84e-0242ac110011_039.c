/*compile-errors:e158_278355.c:5:5: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
if(i=1)
   ~^~
e158_278355.c:5:5: note: place parentheses around the assignment to silence this warning
if(i=1)
    ^
   (  )
e158_278355.c:5:5: note: use '==' to turn this assignment into an equality comparison
if(i=1)
    ^
    ==
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int primecheck(int Num){
    int i;
for(i=2;i<Num;i++)
if(i=1)
return 1;
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
    
    
    
        
    
