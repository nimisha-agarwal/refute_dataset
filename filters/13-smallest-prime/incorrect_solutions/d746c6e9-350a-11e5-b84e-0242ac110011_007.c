/*compile-errors:e158_278362.c:11:3: warning: control may reach end of non-void function [-Wreturn-type]
  }
  ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int n)
  {
      int i;
      for(i=2;i<=n-1;i++)
      {
          if(n%i==0)
          return n;
      }
  }

int main(){
    
    
    return 0;
}