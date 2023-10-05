/*compile-errors:e158_278367.c:4:9: warning: unused variable 'i' [-Wunused-variable]
    int i;
        ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
    int i;
    for(int i=2;i<num;i=i+1)
    { if(num%i==0)
      return 0;
    }
    return 1;
}

int main(){
    int i,N;
    scanf("%d",&N);
    if(N==1){
        printf("%d",N+1);
    }
    else{
    for(i=N;;i++){
    if(check_prime(i)==1)
    { printf("%d",i);
    break;
        }
      }
    }
    return 0;
}