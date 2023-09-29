/*compile-errors:e156_271776.c:18:14: warning: self-comparison always evaluates to false [-Wtautological-compare]
   else if (c!=c){
             ^
e156_271776.c:19:12: warning: self-comparison always evaluates to false [-Wtautological-compare]
       if(c!=c)
           ^
e156_271776.c:5:14: warning: unused variable 't' [-Wunused-variable]
   int a,b,c,t;
             ^
3 warnings generated.*/
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
   else if(a==c){
       if(a==c){
       printf("Acute Triangle");}
   }
  else if(a<c&&c<=5) {
       if((a==b)&&(a!=c)){
        printf("Obtuse Triangle"); }
   }
   else if (c!=c){
       if(c!=c)
 printf("Invalid Triangle");}
    return 0;
}