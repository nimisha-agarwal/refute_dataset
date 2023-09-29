/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)

{ int i;

if(num==1)
return 0;
else if(num==2)
return 1;
else
{for(i=num-1;i<=2;i++)
{
    if(num%i==0)
    return 0;
}
}
return 1;
    
}

int main()
{ 
    int n,x,p;
    int k;
    
    scanf("%d",&n);
    
    for(k=n;k!=0;k++)
    {
       x= check_prime(k);
       if(x==1)
       { p=x;
         k=-1;
       }
        
    }
    
    printf("%d",p);

    
    return 0;
}