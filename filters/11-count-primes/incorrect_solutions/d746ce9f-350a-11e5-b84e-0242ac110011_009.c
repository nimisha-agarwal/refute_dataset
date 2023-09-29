/*compile-errors:e158_278103.c:19:14: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
        if(c1=1)
           ~~^~
e158_278103.c:19:14: note: place parentheses around the assignment to silence this warning
        if(c1=1)
             ^
           (   )
e158_278103.c:19:14: note: use '==' to turn this assignment into an equality comparison
        if(c1=1)
             ^
             ==
e158_278103.c:22:18: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
            if(c2=1)
               ~~^~
e158_278103.c:22:18: note: place parentheses around the assignment to silence this warning
            if(c2=1)
                 ^
               (   )
e158_278103.c:22:18: note: use '==' to turn this assignment into an equality comparison
            if(c2=1)
                 ^
                 ==
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int cprime(int num)
{
   int count;
   for(count=2;count<num;count++)
   {
       if(num%count==0)
       return 0;
   }
   return 1;
}
int main()
{
    int n,i,c1,c2,c3=0;
    scanf("%d",&n);
    for(i=1;i<=n; i++)
        c1=cprime(i);
        if(c1=1)
        {
            c2=cprime(i+2);
            if(c2=1)
            {
                c3=c3+1;
            }
        }
       
    printf("%d",c3);
    return 0;
}