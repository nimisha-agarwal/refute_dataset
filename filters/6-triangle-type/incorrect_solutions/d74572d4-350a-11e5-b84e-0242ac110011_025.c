/*execute-result:OK*/
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
                if (b<=c) {
                       if(c*c==b*b+a*a) {printf("Right Triangle");}
                       if(c*c>b*b+a*a) {printf("Obtuse Triangle");}
                       if(c*c<b*b+a*a) {printf("Acute Triangle") ;}
                       if(c>a+b)       {printf("Invalid Triangle");}
                          }
                else {  if(b*b==c*c+a*a) {printf("Right Triangle");}
                       if(b*b>c*c+a*a) {printf("Obtuse Triangle");}
                       if(b*b<c*c+a*a) {printf("Acute Triangle") ;}
                       if(b>a+c)       {printf("Invalid Triangle");}
                     }
            }
            else {      if(b*b==c*c+a*a) {printf("Right Triangle");}
                       if(b*b>c*c+a*a) {printf("Obtuse Triangle");}
                       if(b*b<c*c+a*a) {printf("Acute Triangle") ;}
                       if(b>a+c)       {printf("Invalid Triangle");}   
                  }
}
    return 0;
            }
        
