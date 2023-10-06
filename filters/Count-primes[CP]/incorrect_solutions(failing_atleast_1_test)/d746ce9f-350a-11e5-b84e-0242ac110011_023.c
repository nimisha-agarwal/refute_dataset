/*compile-errors:e158_278103.c:27:14: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
        if(c1=cprime(i))
           ~~^~~~~~~~~~
e158_278103.c:27:14: note: place parentheses around the assignment to silence this warning
        if(c1=cprime(i))
             ^
           (           )
e158_278103.c:27:14: note: use '==' to turn this assignment into an equality comparison
        if(c1=cprime(i))
             ^
             ==
e158_278103.c:29:18: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
            if(c2=cprime(i+2))
               ~~^~~~~~~~~~~~
e158_278103.c:29:18: note: place parentheses around the assignment to silence this warning
            if(c2=cprime(i+2))
                 ^
               (             )
e158_278103.c:29:18: note: use '==' to turn this assignment into an equality comparison
            if(c2=cprime(i+2))
                 ^
                 ==
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int cprime(int num)
{int c,count,i=3;
    for(count=2; count<=num; count++)
    {
        for(c=2;c<=i-1;c++)
        {
            if(i%c==0)
            break;
        }
        if(c==i)
        {   
            return 1;
        }
    
    }    
    i++;    
    return 0;

}
int main()
{
    int n,i,c1,c2,c3=0;
    scanf("%d",&n);
    for(i=1;i<=n; i++)
        if(c1=cprime(i))
        {
            if(c2=cprime(i+2))
            {
                c3=c3+1;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    printf("%d",c3);
    return 0;
}