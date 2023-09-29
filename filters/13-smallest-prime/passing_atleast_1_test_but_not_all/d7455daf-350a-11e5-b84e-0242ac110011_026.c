/*compile-errors:e158_278304.c:24:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);//function prototype
int check_prime(int num) //function to check prime number>=N
{
    int i,j,tmp;
    for(i=num;i>=num;i++)//loop to upgrade i 
    {
     for(j=2;j<i/2;j++) //loop to check i (prime or not)
      {
       tmp=1;           //temporary variable
       if(i%j==0)       //condition to check non prime number
        {
         tmp=0;
         break;
        }
       }
     if(tmp==0)         //if i is not prime 
     continue;          //repeat the loop
     else
     if((tmp==1)&&(i>1))//if prime
     return i;          //return the prime number
    }
}

int main()              //main function
{
    int N,x;
    scanf("%d",&N);     //input
    x=check_prime(N);//function call and assign return to 'N'
    printf("%d",x);
    return 0;
}