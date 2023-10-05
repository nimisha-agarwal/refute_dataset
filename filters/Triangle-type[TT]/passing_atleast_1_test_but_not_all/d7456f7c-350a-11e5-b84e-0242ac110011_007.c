/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
int x,y,z;
scanf("%d%d%d",&x,&y,&z);
 if((z>x+y)||(x>y+z)||(y>x+z)){
 printf("Invalid Triangle");
 }
 else if((y*y==x*x+z*z)||(x*x==y*y+z*z)||(z*z==x*x+y*y)){
   printf("Right Triangle");
 }
 else if((y*y<x*x+z*z)||(x*x<y*y+z*z)||(z*z<x*x+y*y)){
     printf("Acute Triangle");
 }
 else if((y*y>x*x+z*z)||(x*x>y*y+z*z)||(z*z>x*x+y*y)){
     printf("Obtuse Triangle");
 
 }
 return 0;
}