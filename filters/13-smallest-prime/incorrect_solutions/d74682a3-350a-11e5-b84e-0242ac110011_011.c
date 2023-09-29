/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
    int rem,i,j;
    for(i=num;;i++){
        for(j=2;j<i;j++){
            rem=i%j;
            if(rem==0){
                break;
        }
        if(rem!=0){
            break;
        }
    }
    
    return i;
    }
}
int main(){
    int num,m;
    scanf("%d",&num);
    m=check_prime(num);
    printf("%d",m);
    return 0;
}