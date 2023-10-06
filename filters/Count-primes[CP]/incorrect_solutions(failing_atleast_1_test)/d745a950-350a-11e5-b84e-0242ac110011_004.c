/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{   int y=0;
    for(int i=2;i<num;i++)
    {   if(num%i==0)
        {  y=y+1;
        }
    }
    if(num==2||y==0)
    {   return 1;
    }
    else 
    {   return 0;
    }
}
//Complete function definitions

int main()
{   
    int n,p1,p2,y=0;
    scanf("%d",&n);
    for( int i=2;i<n;i++)
    {   if(1==check_prime(i)&&1==check_prime(i+2)&&i+2<n)
        {    p1=i;
             p2=i+2;
            y=y+1;
        }
    }
    printf("%d%d%d",p1,p2,y);
    return 0;
}
        
