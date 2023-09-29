/*compile-errors:e156_271776.c:5:14: warning: unused variable 't' [-Wunused-variable]
   int a,b,c,t;
             ^
1 warning generated.*/
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
   else if((a==c)&&(a!=b)){
       if((a==c)&&(a!=b)){
       printf("Acute Triangle");}
   }
  else if(a<c&&c<=5) {
       if((a==b)&&(a!=5)){
        printf("Obtuse Triangle"); }
   }
   else 
 printf("Invalid Triangle");
    return 0;
}