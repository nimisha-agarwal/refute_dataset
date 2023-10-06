/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
if(num==1){
    return 0;
}
int i=num-1;
while(i>1){
    if(num%i == 0)
    i--;
    }
    return 0;
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