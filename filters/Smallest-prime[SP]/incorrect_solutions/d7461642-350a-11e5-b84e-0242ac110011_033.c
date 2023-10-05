/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int p)
{
    int i;
    if(p==1||p==2)
    {
        return 2; 
    }
    for (i=2;i<=p;)
    {
        if(p%i!=0)
            {i=i+1;
                continue;
            }
        else    {p++;
                 
                //  printf("%d",p);
                 continue;
    
                 }
        
    }
return p;
    
}

//Complete function definitions

int main()
{

int p;
scanf("%d",&p);
printf("%d",check_prime(p));

    
    //Write your code here
    
    return 0;
}