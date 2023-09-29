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
    for(i=1; i<=a; i++){
        if((a%i && a%1)==0){
            if(((a+2)%i && (a+2)%1)==0){
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