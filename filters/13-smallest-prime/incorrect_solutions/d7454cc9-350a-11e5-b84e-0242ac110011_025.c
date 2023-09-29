/*compile-errors:e158_278297.c:26:1: warning: control may reach end of non-void function [-Wreturn-type]
}//Complete function definitions
^
e158_278297.c:32:17: warning: variable 'i' is uninitialized when used here [-Wuninitialized]
    printf("%d",i);
                ^
e158_278297.c:29:16: note: initialize the variable 'i' to silence this warning
        int n,i;
               ^
                = 0
2 warnings generated.*/
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
            
            if(i>=num){
                return i;
                break;
            }
        }
        
    }
}//Complete function definitions

int main(){
        int n,i;
        scanf("%d",&n);    
      check_prime(n);//Write your code here
    printf("%d",i);
    return 0;
}