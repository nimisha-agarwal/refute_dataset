/*compile-errors:e158_278309.c:8:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int n){
   int i;
   for(i=2;i<n;i++)
   if (n%i!=0)
return n;
}
int main(){
  int m;
  m=check_prime(4);
printf("%d",m);    
    
    return 0;
}
