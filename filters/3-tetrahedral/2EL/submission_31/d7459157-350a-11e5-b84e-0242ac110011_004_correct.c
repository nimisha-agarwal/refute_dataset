/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>//a library

int main()//main function
{ int N,ans=0;//initialising N and defining ans
  scanf("%d",&N);//inputting N
  for(int i=1;i<=N;i++)
   ans+=i*(N+1-i);//calculating ans....ans+=N+1-i as 1 comes Nth times ,2 comes N-1 times ,3 comes N-2 times and so on...  
  printf("%d",ans);	//printing  the output
  return 0;//returns 0
}