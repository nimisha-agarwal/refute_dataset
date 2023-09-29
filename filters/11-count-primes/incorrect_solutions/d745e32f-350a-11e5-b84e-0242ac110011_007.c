/*execute-result:OK*/
/*compile-errors:e158_278065.c:6:10: warning: equality comparison result unused [-Wunused-comparison]
        a==1;
        ~^~~
e158_278065.c:6:10: note: use '=' to turn this equality comparison into an assignment
        a==1;
         ^~
         =
e158_278065.c:8:14: warning: equality comparison result unused [-Wunused-comparison]
            a==0;
            ~^~~
e158_278065.c:8:14: note: use '=' to turn this equality comparison into an assignment
            a==0;
             ^~
             =
e158_278065.c:6:9: warning: variable 'a' is uninitialized when used here [-Wuninitialized]
        a==1;
        ^
e158_278065.c:3:9: note: initialize the variable 'a' to silence this warning
{int i,a;
        ^
         = 0
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int check_prime(int num)
{int i,a;
for(i=1;i<=(num/2);i=i+1){
    if(num%i==0){
        a==1;
        } else  {
            a==0;
        }
}        
if(a==1){return 0;}
else {return 1;}
}           
         
 int main(){
 int N,p,total=0;
 scanf("%d",&N);
  
 for(p=1;p<=N-2;p=p+2){
     if(check_prime(p)==1 && check_prime(p+2)==1){
         total=total +1;
     } 
     printf("%d", total);
     }
 
    
    return 0;
}