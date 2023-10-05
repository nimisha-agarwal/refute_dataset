/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
    int a=0,b=0,c=0,x=0,y=0,z=0;
     scanf("%d,%d,%d",&x,&y,&z);
     
    if(x>y&&x>z)
     {
       c=x,b=y,a=z;
     }
   else
     {
       if(y>z)
       {
           c=y,b=x,a=z;
       }
       else
       {
           c=z,a=x,b=y;
       }
     }
     printf("%d,%d,%d",a,c,b);
    if((c*c)<((a*a)+(b*b)))
     {
      printf("Obtuse Triangle");
     }
    else
     { 
        if((c*c)==(a*a+b*b))
        {
        printf("Right Triangle");
        }
        else
        {
          if((c*c)>((a*a)+(b*b)))
            {
              printf("Acute Triangle");
            }
          else
              {
                if((a+b)<c||(b+c)<a||(a+c)<b)
                {
                  printf("Invalid Triangle"); 
                }
               }
        }       
    return 0;
    }}