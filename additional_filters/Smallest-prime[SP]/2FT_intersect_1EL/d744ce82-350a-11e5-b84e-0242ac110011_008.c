/*compile-errors:e158_278278.c:17:1: warning: control may reach end of non-void function [-Wreturn-type]
}  
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int j=2;
    while (j<=num-1)
    {
        if (num%j==0)
        return 0;
        j=j+1;
    } 
    
    if (j==num)
    
    return 1;
    
}  
int main(){
    
    int N,i;
    scanf ("%d",&N);
    i=N;
    while (i>=N)
    {
        if (check_prime(i))
        break;
        i=i+1;
    }
    printf ("%d",i);

    return 0;
}