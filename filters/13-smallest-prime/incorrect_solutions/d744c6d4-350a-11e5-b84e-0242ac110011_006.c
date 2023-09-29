/*execute-result:OK*/
/*compile-errors:e158_278276.c:5:11: warning: unused variable 'j' [-Wunused-variable]
    int i,j;
          ^
e158_278276.c:21:9: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
    if(b=1)
       ~^~
e158_278276.c:21:9: note: place parentheses around the assignment to silence this warning
    if(b=1)
        ^
       (  )
e158_278276.c:21:9: note: use '==' to turn this assignment into an equality comparison
    if(b=1)
        ^
        ==
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int i,j;
    for(i=2;i<=num;i++)
    {
        if(num%i==0)
        {
            return 0;
        }
    }
    return 1 ;
}

int main()
{
    int a,b;
    scanf("%d",&a);
    b=check_prime(a);
    if(b=1)
    {
        printf("%d",a);
    }
    
    return 0;
}