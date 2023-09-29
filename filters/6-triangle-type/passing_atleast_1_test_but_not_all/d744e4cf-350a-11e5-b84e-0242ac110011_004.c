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
          if(a*a>b*b+c*c) {printf("Obtuse Triangle");}
          if(a*a==b*b+c*c){printf("Right Triangle");}
          if(a*a<b*b+c*c) {printf("Acute Triangle");}
         }   
      if(b>a && b>c)
         {
          if(b*b>a*a+c*c) {printf("Obtuse Triangle");}
          if(b*b==a*a+c*c){printf("Right Triangle");}
          if(b*b<a*a+c*c) {printf("Acute Triangle");}
         }
      if(c>b && c>a)
         {
          if(c*c>b*b+a*a) {printf("Obtuse Triangle");}
          if(c*c==b*b+a*a){printf("Right Triangle");}
          if(c*c<b*b+a*a) {printf("Acute Triangle");}
         }  
      if(a==b || b==c || c==a)
        {
            printf("acute triangle");
        }
   }
   else {printf("invalid triangle");}
    return 0;
}