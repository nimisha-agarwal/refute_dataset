/*compile-errors:e158_278049.c:10:2: warning: control may reach end of non-void function [-Wreturn-type]
 }
 ^
e158_278049.c:14:11: warning: unused variable 'i' [-Wunused-variable]
    int n,i,s;
          ^
e158_278049.c:14:13: warning: unused variable 's' [-Wunused-variable]
    int n,i,s;
            ^
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
int i;
for (i=2;i<num;i++){
    if(num%i==0){return 0;}
    else{return 1;}
    }

 }


int main(){
    int n,i,s;
    scanf("%d",&n);
    
    
    

    
    return 0;
}