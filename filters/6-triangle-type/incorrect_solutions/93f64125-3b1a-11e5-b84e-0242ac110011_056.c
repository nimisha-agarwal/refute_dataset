/*compile-errors:e156_271776.c:7:9: warning: implicitly declaring library function 'sqrt' with type 'double (double)'
   if(c=sqrt(a*a+b*b)) {
        ^
e156_271776.c:7:9: note: please include the header <math.h> or explicitly provide a declaration for 'sqrt'
e156_271776.c:7:8: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
   if(c=sqrt(a*a+b*b)) {
      ~^~~~~~~~~~~~~~
e156_271776.c:7:8: note: place parentheses around the assignment to silence this warning
   if(c=sqrt(a*a+b*b)) {
       ^
      (              )
e156_271776.c:7:8: note: use '==' to turn this assignment into an equality comparison
   if(c=sqrt(a*a+b*b)) {
       ^
       ==
e156_271776.c:8:12: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
       if(c=sqrt(a*a+b*b)){
          ~^~~~~~~~~~~~~~
e156_271776.c:8:12: note: place parentheses around the assignment to silence this warning
       if(c=sqrt(a*a+b*b)){
           ^
          (              )
e156_271776.c:8:12: note: use '==' to turn this assignment into an equality comparison
       if(c=sqrt(a*a+b*b)){
           ^
           ==
e156_271776.c:5:14: warning: unused variable 't' [-Wunused-variable]
   int a,b,c,t;
             ^
4 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
   int a,b,c,t;
   scanf("%d%d%d",&a,&b,&c);
   if(c=sqrt(a*a+b*b)) {
       if(c=sqrt(a*a+b*b)){
        printf("Right Triangle"); }
   else{
       printf("Acute Triangle");}
   }
  else if(a<c&&c<=5) {
       if(a<c){
        printf("Obtuse Triangle"); }
   }
   else if (c>5){
       if(c>5)
 printf("Invalid Triangle");}
    return 0;
}