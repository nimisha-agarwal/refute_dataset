/*execute-result:OK*/
/*compile-errors:e158_278297.c:26:1: warning: control may reach end of non-void function [-Wreturn-type]
}//Complete function definitions
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);

int check_prime(int num){
    int i=2,j,count;
    while(i>1){
        count=0;
        for(j=2;j<i;j++){
            if(i%j==0){
                count=count+1;
            }
            else{
                continue;
            }
        }
        if(count==0){
            return i;
            if(i>=num){
                printf("%d",i);
                break;
            }
        }
        
    }
}//Complete function definitions

int main(){
        int n;
        scanf("%d",&n);    
      check_prime(n);//Write your code here
    
    return 0;
}