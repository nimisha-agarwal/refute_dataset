/*compile-errors:e158_278049.c:7:6: warning: control may reach end of non-void function [-Wreturn-type]
    }}
     ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
int i;
for (i=2;i<num;i++){
    if(num%i==0){return num;}
    }}


int main(){
    
    //Write your code here
    
    return 0;
}