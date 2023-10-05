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
    int a,b;
    scanf("%d%d",&a,&b);
    
    return 0;
}