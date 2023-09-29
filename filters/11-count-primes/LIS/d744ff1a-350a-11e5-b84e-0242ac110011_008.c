/*execute-result:OK*/
/*compile-errors:e158_278028.c:15:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int i;
    for(i=2;i<num;i++)
    {
        if((num%i)==0)
        {
            return 0;
        }
        
        return 1;
    }
}


int main(){
    
    int N;
    scanf("%d",&N);
    int i;int f=0;
    for(i=2;i<(N-1);i++)
    {
        if((check_prime(i)==1)&&(check_prime(i+2)==1))
        f++;
    }
    
    printf("%d",f);

    
    return 0;
}