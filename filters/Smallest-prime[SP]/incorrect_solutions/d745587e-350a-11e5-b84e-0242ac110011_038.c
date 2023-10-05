/*compile-errors:e158_278301.c:14:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{

    int i;
    for(i=1;i<num;i++)
    {
        if(num%i!=0)
        
            return num;
        
    }
}

int main(){
    
    int N;
    scanf("%d",&N);
    check_prime(5);
    
    return 0;
}