/*execute-result:OK*/
/*compile-errors:e158_277956.c:6:9: warning: unused variable 'n' [-Wunused-variable]
int i,j,n,sum=0;
        ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
int num;//number//
scanf("%d",&num);
int i,j,n,sum=0;
scanf("%d",&num);
for(i=0;i<=num;i=i+1){ //
for(j=0;j<=i;j=j+1){
sum=sum+j;
      }
   }
printf("%d",sum);
//Enter your code here
	return 0;
}