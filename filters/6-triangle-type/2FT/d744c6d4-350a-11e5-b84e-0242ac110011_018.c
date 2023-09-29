/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b)//condition for a                                                   Right Angled triangle                                              , any one of the above                                               conditions should satisfy. 
       {
            printf("Right Triangle");
       } 

    else if(a+b<c||b+c<a||c+a<b)//Triangle Inequality,sum of two sides                                     should be greater than third side
       {
            printf("Invalid Triangle");
       }
     
    else if (a*a+b*b>c*c && b*b+c*c>a*a && a*a+c*c>b*b)//condition for                                     an angle to be acute ,For a                                            triangle to be acute all of the                                       above condition should satisfy so we                                         use && sign
       {
             printf("Acute Triangle ");
            
        }
     else if(a*a/2<b*b+c*c<a*a||b*b/2<a*a+c*c<b*b||c*c/2<a*a+b*b<c*c)//                                     condition for a triangle to be                                         obtuse , any one of the above                                             condition should satisfy
    {
            printf("Obtuse Triangle ");
        
    }
  
   
    return 0;
}