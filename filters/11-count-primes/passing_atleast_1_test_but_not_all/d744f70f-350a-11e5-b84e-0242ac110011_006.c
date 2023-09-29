/*execute-result:OK*/
/*compile-errors:e158_278027.c:13:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
for(int i=2;i<=(num/2);++i){
    if(num%i==0){
        return 1;
        break;
    }
    else {
        return 0;
    }
}
}

int main(){
    int N;
    scanf("%d",&N);
    int count=0;
    for(int p=3;p<=N-2;p=p+2){
        if(check_prime(p)==0 && check_prime(p+2)==0){
            count=count+1;
        }
    }
    printf("%d",count);
    
    return 0;
}