/*compile-errors:e158_278097.c:24:1: warning: control reaches end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int i,j,t,m,count;
    count=0;
    for(i=2;i<=num;i++)
    {
        for(j=2;j<i;j++)
        {
            if((i%j)!=0)
            {
                t=i+2;
                for(m=2;m<t;m++)
                {
                    if(t%m!=0)
                    {
                        count=count+1;
                    }
                }
            }
        }
    }
}


int main(){
    
    
    
    return 0;
}