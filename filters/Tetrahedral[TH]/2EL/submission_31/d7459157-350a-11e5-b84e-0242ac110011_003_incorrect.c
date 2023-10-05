/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{ int N,ans=0;
  scanf("%d",&N);
  for(int i=1;i<=N;i++)
   ans=ans+i*(N-1+i);
  printf("%d",ans);	
  return 0;
}