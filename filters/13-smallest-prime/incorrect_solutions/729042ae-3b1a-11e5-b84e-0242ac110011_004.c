/*compile-errors:e158_278261.c:9:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){

int i;
for(i=1;i<num;i++){
    if(num%i == num)
    return 1;}
}
int main(){
    int N,num;
    scanf("%d",&N);
    for(num=N;num<10000;num++){
        if(check_prime(num)==1)
        break;
    }
        printf("%d",num);
    
    return 0;
}