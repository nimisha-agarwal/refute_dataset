/*compile-errors:e158_278108.c:15:13: warning: unused variable 'a' [-Wunused-variable]
    int n,i,a,count;
            ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
   
    int i;
    for(i=2;i<(num);i=i+1){
        if((num)%i==0){
            return 0;}
    }
          
            return 1;
}
//Complete function definitions
int main(){
    int n,i,a,count;
    count=0;
    scanf("%d",&n);
    for(i=2;i<n;i=i+1){
    if(check_prime(i)&&check_prime(i+2)){
        count=count+1;
        printf("%d",count);}
    }
    //Write your code here
    
    return 0;
}