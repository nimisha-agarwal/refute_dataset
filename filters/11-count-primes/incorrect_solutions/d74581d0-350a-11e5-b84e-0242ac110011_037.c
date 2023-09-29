/*compile-errors:e158_278044.c:14:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e158_278044.c:22:24: warning: multiple unsequenced modifications to 'count' [-Wunsequenced]
            count=count++;
                 ~     ^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int check_prime(int);

int check_prime(int a){
    int i;
    for(i=2; i<=(a/2); i++){
        if(a%i==0){
            return 0;
        }
        else{
            return 1;
        }
    }
}

int main(){
    int n, i;
    scanf("%d", &n);
    int count=0;
    for(i=3; i<=(n-2); i++){
        if(check_prime(i) && check_prime(i+2)==1){
            count=count++;
        }
    }
    printf("%d", count);
    return 0;
}