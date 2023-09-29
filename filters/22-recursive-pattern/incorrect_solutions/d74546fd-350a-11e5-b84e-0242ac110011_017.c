/*compile-errors:e175_305988.c:9:4: warning: variable 'x' is uninitialized when used here [-Wuninitialized]
if(x<=a)
   ^
e175_305988.c:8:6: note: initialize the variable 'x' to silence this warning
int x;
     ^
      = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int main() 
{
int a;
scanf("%d",&a);
int search(int ar[],int a,int key);

int x;
if(x<=a)
    printf("%d",x);
    

return 0;
}