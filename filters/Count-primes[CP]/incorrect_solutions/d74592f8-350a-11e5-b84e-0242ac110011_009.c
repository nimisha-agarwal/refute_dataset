/*compile-errors:e158_278049.c:10:2: warning: control may reach end of non-void function [-Wreturn-type]
 }
 ^
e158_278049.c:17:10: warning: expression result unused [-Wunused-value]
    for(i>=2;i<n-1;i++){
        ~^ ~
e158_278049.c:17:9: warning: variable 'i' is uninitialized when used here [-Wuninitialized]
    for(i>=2;i<n-1;i++){
        ^
e158_278049.c:14:12: note: initialize the variable 'i' to silence this warning
    int n,i,s;
           ^
            = 0
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
    s=0;
    for(i>=2;i<n-1;i++){
        
        if(check_prime(i)&&check_prime(i+2))
        {s=s+1;}
    }
    printf("%d",s);
    
    
    

    
    return 0;
}