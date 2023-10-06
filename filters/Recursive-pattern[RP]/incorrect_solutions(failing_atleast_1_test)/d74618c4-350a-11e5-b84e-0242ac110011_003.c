/*compile-errors:e175_306029.c:8:10: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
     if (n>0)//here if value is positive then it subtracts 5 from it
         ^
e175_306029.c:5:10: note: initialize the variable 'n' to silence this warning
    int n,c;
         ^
          = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int main(){
 int t;
    scanf("%d",&t);
    int n,c;
    int pat(int n);
    
     if (n>0)//here if value is positive then it subtracts 5 from it
     return n-5;
     if (n<=0)//here if value is non positive then it adds 5 to it
     return n+5;
     if(n==t)//if n is same as initial value then  it prints same
     return n;


c=pat(n);
n=pat(c);
printf("%d",c);

   
	return 0;
}