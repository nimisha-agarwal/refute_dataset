/*compile-errors:e158_278286.c:12:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e158_278286.c:15:15: warning: unused variable 'i' [-Wunused-variable]
    int N,a,p,i;
              ^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
int i;
for(i=2;i<num;i++) 
 {
    if( num%i==0)
   { return 1;}
else{return num;}
 
}
}

int main(){
    int N,a,p,i;
    scanf("%d",&N);
    
     for(a=0;;a++){
   p=N+a;}
   if( check_prime(p)==1)
     
  
   { printf("%d",p);}
 return 0;
}