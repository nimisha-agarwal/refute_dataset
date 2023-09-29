/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
   if(a+b>c && a+c>b && b+c>a)
   {
       if(a>b && a>c)
         {
          if(a*a>b*b+c*c) {printf("obtuse triangle");}
          if(a*a==b*b+c*c){printf("right triangle");}
          if(a*a<b*b+c*c) {printf("acute triangle");}
         }   
      if(b>a && b>c)
         {
          if(b*b>a*a+c*c) {printf("obtuse triangle");}
          if(b*b==a*a+c*c){printf("right triangle");}
          if(b*b<a*a+c*c) {printf("acute triangle");}
         }
      if(c>b && c>a)
         {
          if(c*c>b*b+a*a) {printf("obtuse triangle");}
          if(c*c==b*b+a*a){printf("right triangle");}
          if(c*c<b*b+a*a) {printf("acute triangle");}
         }  
      if(a==b || b==c || c==a)
        {
            printf("acute triangle");
        }
   }
   else {printf("invalid triangle");}
    return 0;
}