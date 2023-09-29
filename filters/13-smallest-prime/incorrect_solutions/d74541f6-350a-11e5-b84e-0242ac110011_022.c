/*execute-result:OK*/
/*compile-errors:e158_278295.c:4:11: warning: unused variable 'a' [-Wunused-variable]
    int i,a;
          ^
e158_278295.c:10:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
    int i,a;
    for(i=2;i<num;i++){
        if(num%i==0){
        return num;}
        else return 0;
    }
}


//Complete function definitions

int main(){
    int i,k;
    scanf("%d", &k);
    for(i=k;i<=k*k;i++){
        if(check_prime(i)!=0){
            printf("%d", i);
            break;
        }
    }
    //Write your code here
    
    return 0;
}