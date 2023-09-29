/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int p;
int i;
int N;

int check_prime(int N){
    scanf("%d",&N);
    for(p=N;;p++){
     for(i=2;i<p;i++){
         if(p%i==0){
             return 0;}
             else{
                 continue;
             }
         }
         
         }
         return p;
}
    
int main(){
 scanf("%d",&N);
 int check_prime(int N);
  printf("%d",p);
 
    return 0;
}

