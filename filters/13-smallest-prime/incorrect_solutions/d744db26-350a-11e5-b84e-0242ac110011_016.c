/*compile-errors:e158_278279.c:13:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e158_278279.c:20:11: warning: variable 'a' is uninitialized when used here [-Wuninitialized]
    for(i=a;i<=100;i++)
          ^
e158_278279.c:18:10: note: initialize the variable 'a' to silence this warning
    int a,n,i,j,c=0;
         ^
          = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int i,c=0; 
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        c++;
    }
    if(c==2)
    return num;
}


int main()
{
    int a,n,i,j,c=0;
    scanf("%d",&n);
    for(i=a;i<=100;i++)
    {
       a=check_prime(n);
       for(j=1;j<=i;j++)
       {
          if(a%i==0)
          c++;
       }
       if(c==2)
       break;
    }
    printf("%d",a);
    return 0;
}