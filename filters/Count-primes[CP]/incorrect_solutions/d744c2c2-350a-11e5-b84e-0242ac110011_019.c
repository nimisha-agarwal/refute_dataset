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
          return 0;
          
       }
       
    }
    return 1;
}


//Complete function definitions

int main(){
    
    //Write your code here
    int a,c,count=0;
    scanf("%d",&a);
   
    for (int i=1;i<=a-2;i++)
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