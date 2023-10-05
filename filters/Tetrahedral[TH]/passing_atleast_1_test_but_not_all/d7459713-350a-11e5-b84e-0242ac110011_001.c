/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
   int i,j,N,sum;/*N represents input number*/
   scanf("%d",&N);
   for(i=N;i>=1;i--){
      for(j=N;j>=1;j--){
        sum=0;
        sum=sum+j;
        printf("%d",sum);}
   }
	return 0;
}