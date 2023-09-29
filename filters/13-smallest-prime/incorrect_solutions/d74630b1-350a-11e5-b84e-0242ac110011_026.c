/*compile-errors:e158_278341.c:6:21: warning: unused parameter 'N' [-Wunused-parameter]
int check_prime(int N){
                    ^
e158_278341.c:11:5: warning: control reaches end of non-void function [-Wreturn-type]
    }
    ^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int p;
int i;
int N;

int check_prime(int N){
    
   
    
        
    }
  
    
int main(){
scanf("%d",&N);
 for(p=N;;p++){
     for(i=2;i<p;i++){
         if(p%i==0){
             break;}
             else{
                 continue;
             }
             
         }
    break;
    printf("%d",p);
}
return 0;
}
