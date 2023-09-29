/*compile-errors:e158_278341.c:8:9: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
    if(f=1){
       ~^~
e158_278341.c:8:9: note: place parentheses around the assignment to silence this warning
    if(f=1){
        ^
       (  )
e158_278341.c:8:9: note: use '==' to turn this assignment into an equality comparison
    if(f=1){
        ^
        ==
e158_278341.c:7:21: warning: unused parameter 'N' [-Wunused-parameter]
int check_prime(int N){
                    ^
e158_278341.c:12:5: warning: control may reach end of non-void function [-Wreturn-type]
    }
    ^
e158_278341.c:27:9: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
    if(f=0){
       ~^~
e158_278341.c:27:9: note: place parentheses around the assignment to silence this warning
    if(f=0){
        ^
       (  )
e158_278341.c:27:9: note: use '==' to turn this assignment into an equality comparison
    if(f=0){
        ^
        ==
e158_278341.c:30:6: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
 if(f=1){  
    ~^~
e158_278341.c:30:6: note: place parentheses around the assignment to silence this warning
 if(f=1){  
     ^
    (  )
e158_278341.c:30:6: note: use '==' to turn this assignment into an equality comparison
 if(f=1){  
     ^
     ==
5 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int p;
int i;
int N;
int f;

int check_prime(int N){
    if(f=1){
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
    if(f=0){
    continue;
         }
 if(f=1){  
 break;
        }
        printf("%d",p);
 }
return 0;
}
