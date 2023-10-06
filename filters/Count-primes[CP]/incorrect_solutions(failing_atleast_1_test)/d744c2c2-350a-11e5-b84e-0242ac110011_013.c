/*execute-result:OK*/
/*compile-errors:e158_278018.c:28:17: warning: unused variable 'd' [-Wunused-variable]
    int a,b,t,c,d=0,e,count=0;
                ^
e158_278018.c:28:21: warning: unused variable 'e' [-Wunused-variable]
    int a,b,t,c,d=0,e,count=0;
                    ^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    
    for (int i=2;i<num;i++)
    {
       if( num%i!=0)
       {
           continue;
       }
       else
       {
          return 1;
          
       }
       
    }
    return 0;
}


//Complete function definitions

int main(){
    
    //Write your code here
    int a,b,t,c,d=0,e,count=0;
    scanf("%d%d",&a,&b);
    if (a<b)//swapping of numbers
    {
        
    }
    else
    {
       t=a;
       a=b;
       b=t;
    }
    for (int i=a;i<=b-2;i++)
    {
        c=i;
        if (c%2!=0)
        {
        if(check_prime(c)&&check_prime(c+2))
        {
            count=count + 1;
        }
        }
    }
    printf("%d",count);
    
    return 0;
}