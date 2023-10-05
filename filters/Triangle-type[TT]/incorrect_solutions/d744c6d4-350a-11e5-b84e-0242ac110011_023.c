/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    
    if(a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b)
    {
            printf("Right Triangle");
    }

 
      else if(a*a/2<b*b+c*c<a*a||b*b/2<a*a+c*c<b*b||c*c/2<a*a+b*b<c*c)
    {
            printf("Obtuse Triangle ");
        
    }
    else if (a*a+b*b>c*c && b*b+c*c>a*a && a*a+c*c>b*b)
     {
             printf("Acute Triangle ");
        
    }
  
   
    return 0;
}