/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int x){
    int i,j;
    for(i=1;i<=x;i++)
    {
        if(x%i==0 && x==i)
            {
                j=i;
            }
    }
    return j ;
}

int main()
{
    
    //W
    
    return 0;
}