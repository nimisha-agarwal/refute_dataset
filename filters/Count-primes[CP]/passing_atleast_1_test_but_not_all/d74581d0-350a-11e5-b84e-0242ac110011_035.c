/*compile-errors:e158_278044.c:18:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int);
int i, ans;

int check_twinprime(int a){
    for(i=2; i<=(a/2); i++){
        if(a%i==0){
            a= a+2;                                             
            if(a%i==0){
                a= a-1;
                return ans++;}
        }
        else{
            a++;
            }
    }
}

int main(){
    
    int x, m;
    scanf("%d", &x);
    m= check_twinprime(x);
    printf("%d", m);
    
    return 0;
}