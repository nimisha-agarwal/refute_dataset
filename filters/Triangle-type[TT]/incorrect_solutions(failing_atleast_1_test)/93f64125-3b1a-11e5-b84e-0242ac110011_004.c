/*compile-errors:e156_271776.c:14:17: warning: self-comparison always evaluates to true [-Wtautological-compare]
  else if(a<c&&c<=c) {
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
   if((a<b)&&(a!=c)) {
       if(a<b<c){
        printf("Right Triangle"); }}
   else if((a==c)&&(c!=b)){
       if(a==c){
       printf("Acute Triangle");}
   }
  else if(a<c&&c<=c) {
       if((a==b)&&(a!=c)){
        printf("Obtuse Triangle"); }
   }
   else 
 printf("Invalid Triangle");
    return 0;
}