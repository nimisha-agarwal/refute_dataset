/*execute-result:OK*/
/*compile-errors:e158_278292.c:10:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);
int check_prime(int num)
{ int i;
  for (i=2;i<num;i++)
  { if (num%i!=0)
    return num; 
  }    
}
int main()
{ int N;
  scanf("%d",&N);
  
  if (check_prime(N)==1)
  { printf("%d",N); }
 
  
    
    return 0;
}