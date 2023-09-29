/*compile-errors:e158_277956.c:16:13: warning: variable 'sum' is uninitialized when used here [-Wuninitialized]
printf("%d",sum);
            ^~~
e158_277956.c:6:14: note: initialize the variable 'sum' to silence this warning
int i,j,n,sum; 
             ^
              = 0
e158_277956.c:7:11: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
for(i=0;i<n;i=i+1){
          ^
e158_277956.c:6:10: note: initialize the variable 'n' to silence this warning
int i,j,n,sum; 
         ^
          = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
int num;
scanf("%d",&num);
int i,j,n,sum; 
for(i=0;i<n;i=i+1){
int sum=0;
for(j=0;j<n;j=j+1){
scanf("%d",&num);
if(num<0) continue;
sum=sum+num;
}
printf("%d",sum);
}
printf("%d",sum);
//Enter your code here
	return 0;
}