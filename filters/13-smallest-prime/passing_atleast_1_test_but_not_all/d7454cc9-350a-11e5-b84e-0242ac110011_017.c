/*execute-result:OK*/
/*compile-errors:e158_278297.c:25:11: warning: multiple unsequenced modifications to 'i' [-Wunsequenced]
       i=i++; 
        ~ ^
e158_278297.c:27:1: warning: control may reach end of non-void function [-Wreturn-type]
}//Complete function definitions
^
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
                
            }
            
        }
       i=i++; 
    }
}//Complete function definitions

int main(){
        int n,s;
        scanf("%d",&n);    
      s=check_prime(n);//Write your code here
    printf("%d",s);
    return 0;
}