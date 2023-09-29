/*compile-errors:e158_278364.c:31:17: warning: variable 'i' is uninitialized when used here [-Wuninitialized]
    printf("%d",i);
                ^
e158_278364.c:23:10: note: initialize the variable 'i' to silence this warning
    int i;
         ^
          = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int c=0;
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {c++;}
    
    }
    
    if(c==2)
    return 1;
    else 
    return 0;
}

int main()
{
    int n;
    scanf("%d",&n);
    int i;
    for(int i=n;;i++)
    {
        int c=check_prime(i);
        if(c==1)
        break;
    }
    
    printf("%d",i);
    
    
    return 0;
    
    
    
}