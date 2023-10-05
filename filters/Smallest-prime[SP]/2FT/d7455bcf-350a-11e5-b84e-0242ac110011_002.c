/*execute-result:OK*/
/*compile-errors:e158_278302.c:22:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{   
    int p = num;
    int i;
    while(p>=num){
    int cond = 0;
    for(i=2;i<p;i++){
        if(p%i==0){
            cond = 1;
        }
    }
    if(cond == 0){
        return p;
        break;
    }
    else{
        p = p+1;
    }
}
}

int main(){
    int num,p;
    scanf("%d",&num);
    p = check_prime(num);
    printf("%d",p);
    return 0;
}