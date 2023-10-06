/*execute-result:TL*/
/*compile-errors:e158_277956.c:8:12: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
for(i=0;i<=n;i=i+1){
           ^
e158_277956.c:6:10: note: initialize the variable 'n' to silence this warning
int i,j,n,sum=0;
         ^
          = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
int num;
scanf("%d",&num);
int i,j,n,sum=0;
scanf("%d",&num);
for(i=0;i<=n;i=i+1){
for(j=0;j<=i;j=j+1){
sum=sum+j;
      }
   }
printf("%d",sum);
//Enter your code here
	return 0;
}