/*compile-errors:e158_278018.c:28:11: warning: unused variable 'c' [-Wunused-variable]
    int a,c,count=0;
          ^
1 warning generated.*/
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
        
        if (i%2!=0)
        {
        if(check_prime(i)&&check_prime(i+2))
        {
            count=count + 1;
        }
        }
    }
    printf("%d",count);
    
    return 0;
}