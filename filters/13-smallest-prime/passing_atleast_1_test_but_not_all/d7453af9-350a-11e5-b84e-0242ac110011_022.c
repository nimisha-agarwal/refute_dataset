/*compile-errors:e158_278294.c:18:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
    if(num==2){return 0;}
    else {
        int i;
        for(i=2;i<num;i++){
        if(num%i==0){
            return 0;
            break;
        }
        else{
            return 1;
            break;
        }
    }
}
}



     int main() {
      int N, i;
    scanf("%d",&N);
    for(i=N;i>=N;i++){
        if(check_prime(i)==1){
            printf("%d",i);
            break;
            }
    }

    return 0;
}