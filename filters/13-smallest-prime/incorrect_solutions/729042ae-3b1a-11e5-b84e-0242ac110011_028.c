/*compile-errors:e158_278261.c:10:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){

int i;
for(i=2;i<num;i++){
    if(num%i == num)
    return 1;
    }
}
int main(){
    int N,num,x;
    scanf("%d",&N);
    for(num=N;num<10000;num++){
        x=check_prime(num);
        if(x==1)
        break;
    }
    printf("%d",num);
    
    return 0;
}