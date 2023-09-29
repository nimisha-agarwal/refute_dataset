/*compile-errors:e175_306021.c:4:7: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
    a=n;
      ^
e175_306021.c:3:10: note: initialize the variable 'n' to silence this warning
    int n,a;
         ^
          = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int main(){
    int n,a;
    a=n;
    scanf("%d",&n);
    while(a!=n)
{  a=a-5;
   a++;}
   printf("%d",a);
    

    
	return 0;
}