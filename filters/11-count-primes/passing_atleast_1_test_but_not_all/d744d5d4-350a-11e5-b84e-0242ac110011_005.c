/*compile-errors:e158_278022.c:31:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
#include<math.h>
int check_prime(int num);
int main()
{
    
    int a,b,c,i,count=0;
    scanf("%d",&a);
    for(i=2;i<=a-2;i++)
    {    
        b=check_prime(i);
        if(b>0)
        {
            c=check_prime(i+2);
            if(c>0)
            count=count+1;
        } 
    }        
    printf("%d",count);
    return 0;
}
int check_prime(int num)
{
    int i,d=0;
    for(i=2;i<=sqrt(num);i++)
       if(num%i==0)
           break;
       if(i>sqrt(num))
      return d;
    
}