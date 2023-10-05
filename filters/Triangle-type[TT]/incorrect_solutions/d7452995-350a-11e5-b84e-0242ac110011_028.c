/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
/*program to determine if the triangle is acute, right or obtuse. You should print "Invalid Triangle" if the side combinations do not correspond to a valid triangle.*/
#include<stdio.h>
int main()
{
  int a,b,c;
   scanf("%d %d %d",&a,&b,&c);//a,b,c are sides of triangle
   if((a<b+c)&&(b<a+c)&&(c<a+b))//condition for triangle to exist
   {
   if((a*a==b*b+c*c)||(b*b==a*a+c*c)||(c*c==a*a+b*b))
   {
       printf("Right Triangle");
   }
       if((a*a>b*b+c*c)||(b*b>a*a+c*c)||(c*c>a*a+b*b))
   {
       printf("Obtuse Triangle");
   }
   if((a*a<b*b+c*c)&&(b*b<a*a+c*c)&&(c*c<a*a+b*b))
   {
       printf("Acute Triangle");
   }
   }
   if((a>b+c)||(b>a+c)||(c>a+b))//condition for triangle to be invalid
   {
       printf("Invalid Triangle");
   }
    return 0;
}