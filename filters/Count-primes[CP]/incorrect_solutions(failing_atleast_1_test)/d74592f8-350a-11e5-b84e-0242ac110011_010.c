/*compile-errors:e158_278049.c:10:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
int i;
for (i=2;i<num;i++){
    if(num%i==0){return 1;}
    else{return 0;}
    }
    
}


int main(){
    

    
    return 0;
}