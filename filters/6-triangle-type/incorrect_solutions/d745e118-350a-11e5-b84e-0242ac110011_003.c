/*compile-errors:e156_271838.c:6:11: warning: expression result unused [-Wunused-value]
   if (a+b>c,b+c>a,c+a>b){
       ~~~^~
e156_271838.c:6:17: warning: expression result unused [-Wunused-value]
   if (a+b>c,b+c>a,c+a>b){
             ~~~^~
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
   int a,b,c;
   scanf("%d %d %d",&a,&b,&c);
   if (a+b>c,b+c>a,c+a>b){
       printf("triangle");
   }
   else {
       printf("invalid triangle");
       }
    return 0;
}