/*compile-errors:e158_278049.c:12:2: warning: control may reach end of non-void function [-Wreturn-type]
 }
 ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
int i;
if(num==2){return 1;}
else{
for (i=2;i<num;i++){
    if(num%i==0){return 0;}
    else{return 1;}
    }}

 }


int main(){
    int n,i,s;
    scanf("%d",&n);
    s=0;
    for(i=2;i<n-1;i++){
        
        if(check_prime(i)&&check_prime(i+2))
        {s=s+1;}
    }
    printf("%d",s);
    
    
    

    
    return 0;
}