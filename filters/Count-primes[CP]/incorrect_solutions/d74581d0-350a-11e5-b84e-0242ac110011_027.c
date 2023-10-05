/*execute-result:OK*/
/*compile-errors:e158_278044.c:13:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);
int i, ans;
int check_prime(int a){
    for(i=2; i<=a; i++){
        if((a%i)==0){
            if((a+2)%i==0){
                return ans++;
            }
        }
    }
}

int main(){
    
    int x, m;
    scanf("%d", &x);
    m= check_prime(x);
    printf("%d", m);
    
    return 0;
}