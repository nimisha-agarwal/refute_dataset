/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)/*creating afunction*/
{
    int i;
    for(i=2;i<=(num-1);i++)/*defining value of i*/
    {
        if(num%i==0)
        {
            
            return 0;
            
        }
        
    }
    return 1;
}
  
int main()
{   int i,N,count=0;/*use of above function*/
    scanf("%d",&N);

    for(i=2;i<=(N-2);i++)
    {
    if ((check_prime(i)==1)&&(check_prime(i+2)==1))/*checking prime or not*/
      {
        count++;
      }
    }
    printf("%d",count);
 return 0;
}