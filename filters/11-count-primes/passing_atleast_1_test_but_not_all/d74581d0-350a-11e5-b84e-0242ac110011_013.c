/*execute-result:OK*/
/*compile-errors:e158_278044.c:11:5: warning: control may reach end of non-void function [-Wreturn-type]
    }
    ^
e158_278044.c:9:16: warning: variable 'j' is uninitialized when used here [-Wuninitialized]
        return j;
               ^
e158_278044.c:4:13: note: initialize the variable 'j' to silence this warning
    int i, j;
            ^
             = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int a){
    int i, j;
    for(i=2; i<=(a/2); i++){
        if(a%i==0){
            j=0; break;
        }
        return j;
        }
    }

int main(){
    int n, i;
    scanf("%d", &n);
    int count=0;
    for(i=3; i<=(n-2); i++){
        if(check_prime(i) && check_prime(i+2)==1){
            count=count+1;
        }
    }
    printf("%d", count);
    return 0;
}