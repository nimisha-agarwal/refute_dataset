/*compile-errors:e158_278297.c:24:20: warning: multiple unsequenced modifications to 'i' [-Wunsequenced]
                i=i++;
                 ~ ^
e158_278297.c:29:16: warning: multiple unsequenced modifications to 'i' [-Wunsequenced]
            i=i++;
             ~ ^
e158_278297.c:32:1: warning: control may reach end of non-void function [-Wreturn-type]
}//Complete function definitions
^
3 warnings generated.*/
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
            else{
                i=i++;
            }
            
        }
        else{
            i=i++;
        }
    }
}//Complete function definitions

int main(){
        int n,s;
        scanf("%d",&n);    
      s=check_prime(n);//Write your code here
    printf("%d",s);
    return 0;
}