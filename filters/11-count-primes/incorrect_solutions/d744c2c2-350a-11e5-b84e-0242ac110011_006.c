/*execute-result:OK*/
/*compile-errors:*/
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
    int a,b,t;
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
    for (int i=a;i<=b;i++)
    {
        check_prime(i);
    }
    
    return 0;
}