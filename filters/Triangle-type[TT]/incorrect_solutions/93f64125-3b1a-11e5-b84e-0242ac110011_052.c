/*compile-errors:e156_271776.c:10:4: warning: add explicit braces to avoid dangling else [-Wdangling-else]
   else{ 
   ^
e156_271776.c:5:14: warning: unused variable 't' [-Wunused-variable]
   int a,b,c,t;
             ^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
   int a,b,c,t;
   scanf("%d%d%d",&a,&b,&c);
    if(a<b!=c)
    if(a<b<c){
        printf("Right Triangle"); }
   else{ 
       printf("Acute Triangle");}
   /*}
  else if(a<c&&c<=5) {
       if(a<c){
        printf("Obtuse Triangle"); }
   }
   else if (c>5){
       if(c>5)
 printf("Invalid Triangle");}*/
    return 0;
}