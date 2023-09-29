/*compile-errors:e158_278286.c:12:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
int i;
for(i=1;i<num;i++) 
 {
    if( num%i==0)
   { return 0;}
else{return num;}
 
}
}

int main(){
    int N,a,p;
    scanf("%d",&N);
  for(a=0;;a++){
   p=N+a;
    check_prime(p);}
    printf("%d",p);
 return 0;
}