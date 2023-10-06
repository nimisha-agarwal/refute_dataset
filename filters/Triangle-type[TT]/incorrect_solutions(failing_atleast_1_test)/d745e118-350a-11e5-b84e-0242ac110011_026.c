/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
   int a,b,c;
   scanf("%d %d %d",&a,&b,&c);
   if ((a+b>c)&&(b+c>a)&&(c+a>b))
   {
       printf("triangle");
   }
   else {
       printf("Invalid Triangle");
       }
    return 0;
}