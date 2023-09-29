/*compile-errors:e158_278286.c:12:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e158_278286.c:15:13: warning: variable 'p' is used uninitialized whenever function 'main' is called [-Wsometimes-uninitialized]
    int N,a,p,i;
    ~~~~~~~~^
e158_278286.c:17:11: note: uninitialized use occurs here
  for(a=0;p%i==0;a++){
          ^
e158_278286.c:15:14: note: initialize the variable 'p' to silence this warning
    int N,a,p,i;
             ^
              = 0
e158_278286.c:17:13: warning: variable 'i' is uninitialized when used here [-Wuninitialized]
  for(a=0;p%i==0;a++){
            ^
e158_278286.c:15:16: note: initialize the variable 'i' to silence this warning
    int N,a,p,i;
               ^
                = 0
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
int i;
for(i=2;i<num;i++) 
 {
    if( num%i==0)
   { return 0;}
else{return num;}
 
}
}

int main(){
    int N,a,p,i;
    scanf("%d",&N);
  for(a=0;p%i==0;a++){
   p=N+a;
    check_prime(p);}
    printf("%d",p);
 return 0;
}