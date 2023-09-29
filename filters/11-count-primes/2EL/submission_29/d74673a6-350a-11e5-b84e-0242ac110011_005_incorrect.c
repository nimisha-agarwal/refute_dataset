/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
    int i;
    int d=1;
       for(i=2;i<=num;i=i+1){
           if(num%i==0){
               d=0;break;}
       }
    return d;
}
//Complete function definitions

int main(){
    int N,i;
     scanf("%d",&N);
    int count=0;
         for(i=3;i<=N-2;i=i+1){
             if(check_prime(i)&&check_prime(i+2)==1){
                 count=count+1;
             }}
    printf("%d",count);         
            
    
    //Write your code here
    
    return 0;
}