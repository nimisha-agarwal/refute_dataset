/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
 int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
 if (a<=b)  {
            if (a<=c) {
                if (b<=c) { if (c<a+b) {
                       if(c*c==b*b+a*a) {printf("Right Triangle");}
                       if(c*c>b*b+a*a) {printf("Obtuse Triangle");}
                       if(c*c<b*b+a*a) {printf("Acute Triangle") ;}}
                       if(c>a+b)       {printf("Invalid Triangle");}
                          }
                else {    if (c<a+b) {
                       if(b*b==c*c+a*a) {printf("Right Triangle");}
                       if(b*b>c*c+a*a) {printf("Obtuse Triangle");}
                       if(b*b<c*c+a*a) {printf("Acute Triangle") ;}}
                       if(b>a+c)       {printf("Invalid Triangle");}
                     }
            }
            else {   if (c<a+b) {  
                       if(b*b==c*c+a*a) {printf("Right Triangle");}
                       if(b*b>c*c+a*a) {printf("Obtuse Triangle");}
                       if(b*b<c*c+a*a) {printf("Acute Triangle") ;}}
                       if(b>a+c)       {printf("Invalid Triangle");}   
                  }
} 
else {
      if(b>c) {      if (c<a+b) {
                       if(a*a==c*c+b*b) {printf("Right Triangle");}
                       if(a*a>c*c+b*b) {printf("Obtuse Triangle");}
                       if(a*a<c*c+c*c) {printf("Acute Triangle") ;}}
                       if(a>b+c)       {printf("Invalid Triangle");} 
      }              
}
    return 0;
            }