/*compile-errors:e158_278357.c:13:9: warning: unused variable 'N' [-Wunused-variable]
    int N,p;
        ^
e158_278357.c:13:11: warning: unused variable 'p' [-Wunused-variable]
    int N,p;
          ^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int i;
int check_prime(int a){
    for(i=2;i<a;i++){
        if ((a%i)==0){
        break;
        }
    }
    return a;
}

int main(){
    int N,p;
    
    
    
    return 0;
}