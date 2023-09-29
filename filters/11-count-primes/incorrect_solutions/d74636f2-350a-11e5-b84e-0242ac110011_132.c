/*compile-errors:e158_278081.c:13:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e158_278081.c:7:12: warning: variable 'p' is uninitialized when used here [-Wuninitialized]
        if(p%i==0)
           ^
e158_278081.c:4:12: note: initialize the variable 'p' to silence this warning
    int i,p;//defining of integers for function.
           ^
            = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int check_prime(int num)
{
    int i,p;//defining of integers for function.
    for(i=2;i<num;i++)
    {
        if(p%i==0)
        p=1;
        return 0;
        p=0;
        return 1;
    }
}
int main()
{
    int a,b,count=0;
    scanf("%d",&a);
    for(b=2;b<=a;b++)
    { 
        count = count + (check_prime(b))&&(check_prime(b+2));
        printf("%d",count);
    }
    return 0;
}