/*execute-result:OK*/
/*compile-errors:*/
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
    scanf("%d",&N);
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
       if(x==1)
       p=i;
       i++;  
    }
    
    printf("%d",p);
    
    
    return 0;
}