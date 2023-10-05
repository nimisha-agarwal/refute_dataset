/*execute-result:OK*/
/*compile-errors:e156_271876.c:5:12: warning: variable 'c' is uninitialized when used here [-Wuninitialized]
      temp=c;
           ^
e156_271876.c:4:16: note: initialize the variable 'c' to silence this warning
     {int a,b,c,temp;
               ^
                = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
     {int a,b,c,temp;
      temp=c;
      scanf("%d%d%d",&a,&b,&c);
     if(a>=c&&a>=b)
       {c=a;
        a=b;
        b=temp;
       }
     else if (b>=c&&b>=a)
        {c=b;
         b=a;
         a=temp;
        }
        
     if((a+b>c)&&(b+c>a)&&(c+a>b))
      { if(a*a+b*b>c*c)
         { printf("Acute Triangle");
         }
        else if((a*a+b*b)==(c*c))
         {  printf ("Right Triangle");
         }
        else 
         {  printf("Obtuse Triangle");
         }
      }
    else{printf("Invalid Triangle"); 
         }
    return 0;
   }