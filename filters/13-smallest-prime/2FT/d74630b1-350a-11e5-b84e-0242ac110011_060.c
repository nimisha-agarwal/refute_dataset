/*compile-errors:e158_278341.c:7:21: warning: unused parameter 'N' [-Wunused-parameter]
int check_prime(int N){
                    ^
e158_278341.c:11:5: warning: control may reach end of non-void function [-Wreturn-type]
    }
    ^
e158_278341.c:39:25: warning: data argument not used by format string [-Wformat-extra-args]
            printf("&d",y);
                   ~~~~ ^
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int p;
int i;
int N;
int f;

int check_prime(int N){
    if(f==1){
        return p;
    }
    }
  
    
int main(){
scanf("%d",&N);
 for(p=N;;p++){
     for(i=2;i<p;i++){
         if(p%i==0){
             f=0;
             break;}
         else{
             f=1;
             continue;
             }
     }
    if(f==0){
    continue;
         }
 if(f==1){ 
     break;
     return p;
 
        }}
        if(N!=1){
        int x=check_prime(N);
        printf("%d",x);}
        if(N==1){
            int y=2;
            printf("&d",y);
        }
 
return 0;
}
