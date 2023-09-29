/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int);
int check_prime(int num)
{ int i;
  for (i=2.0;i<num;i++)
  { if (num%i==0)
    return 0; 
  } return 1;   
}
int main()
{ int N;int A;
  scanf("%d",&N);
  if (N==1)
  { printf("%d",2); }
  if ((N!=1)&&(check_prime(N)))
  { printf("%d",N); }
  else 
  {
   for (A=N;(A<=(2*N));A++)
    { if (check_prime(A))break;
       
    }  printf("%d",A);  
  }

    return 0;
}