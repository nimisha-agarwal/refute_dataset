/*execute-result:OK*/
/*compile-errors:e158_278363.c:41:17: warning: variable 'p' is uninitialized when used here [-Wuninitialized]
    printf("%d",p);
                ^
e158_278363.c:21:16: note: initialize the variable 'p' to silence this warning
{   int i,N,x,p;
               ^
                = 0
e158_278363.c:34:7: warning: variable 'N' is uninitialized when used here [-Wuninitialized]
    i=N;
      ^
e158_278363.c:21:12: note: initialize the variable 'N' to silence this warning
{   int i,N,x,p;
           ^
            = 0
2 warnings generated.*/
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
        if((num%i)!=0)
        {
            y=1;
            
        }
    }
    return y;
}

int main()
{   int i,N,x,p;
    x=0;
    /*
    for(i=N;;i++)
    {
        x=check_prime(i);
        if(x==1)
        {
          p=i;
          break;  
        }
        
    }*/
    i=N;
    while(x!=1)
    {
       x=check_prime(i);
       i++;  
    }
    
    printf("%d",p);
    
    
    return 0;
}