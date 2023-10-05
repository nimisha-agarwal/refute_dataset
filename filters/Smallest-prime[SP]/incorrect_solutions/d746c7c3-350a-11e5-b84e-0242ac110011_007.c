/*execute-result:OK*/
/*compile-errors:e158_278363.c:23:11: warning: variable 'N' is uninitialized when used here [-Wuninitialized]
    for(i=N;;i++)
          ^
e158_278363.c:22:12: note: initialize the variable 'N' to silence this warning
    int i,N,x,p;
           ^
            = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);

 //function definitions
int check_prime(int num)
{    
    int i,y=0;
    for(i=2;i<num;i++)
    {
        if(num%i!=0)
        {
            y=1;
            break;
        }
    }
    return y;
}

int main()
{
    int i,N,x,p;
    for(i=N;;i++)
    {
        x=check_prime(i);
        if(x==1)
        {
          p=i;
          break;  
        }
        
    }
    
    printf("%d",p);
    
    
    return 0;
}