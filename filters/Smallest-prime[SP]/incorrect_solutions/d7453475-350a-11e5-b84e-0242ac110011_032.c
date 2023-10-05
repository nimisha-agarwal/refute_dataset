/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int);
int check_prime(int num)
{ int i;
  for (i=2;i<num;i++)
  { if (num%i==0)
    return -1; 
  } return num;   
}
int main()
{ int N;
  scanf("%d",&N);
  
  if (check_prime(N)==N)
  { printf("%d",N); }
  else 
  {int A;
   for (A=N+1;(A<=(2*N));A++)
    { if (check_prime(A)==A)
      { printf("%d",A); }
    }  
  }
    return 0;
}