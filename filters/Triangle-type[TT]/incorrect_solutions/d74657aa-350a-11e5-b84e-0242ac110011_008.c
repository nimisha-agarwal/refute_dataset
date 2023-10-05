/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{int a,b,c;/*let a,b,c be three sides of the triangle*/
 
 scanf("%d %d %d",&a,&b,&c);
 if((a+b>c)&&(b+c>a)&&(a+c>b))/*checking the triangle is valid or not*/ {  if(((a*a+b*b)<c*c)||((c*c+b*b)<a*a)||((a*a+c*c)<b*b))
      printf("Obtuse Triangle");
   else  
      {if(((a*a+b*b)==c*c)||((c*c+b*b)==a*a)||((a*a+c*c)<b*b))
        printf("Right Triangle");
      else
        if(((a*a+b*b)>c*c)&&((c*c+b*b)>a*a)&&((a*a+c*c)&&b*b))
          printf("Acute Triangle");
     } 
 }
 else
   printf("Invalid Triangle");
 
 return 0;
}