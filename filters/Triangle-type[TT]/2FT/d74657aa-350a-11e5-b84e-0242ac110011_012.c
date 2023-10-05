/*compile-errors:e156_271865.c:20:32: warning: if statement has empty body [-Wempty-body]
        if((d>0)&&(e>0)&&(f>0));
                               ^
e156_271865.c:20:32: note: put the semicolon on a separate line to silence this warning
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{int a,b,c;/*let a,b,c be three sides of the triangle*/
 scanf("%d %d %d",&a,&b,&c);
 float d,e,f;
 d = (((a*a+b*b)-c*c)/2*a*b);
 e = (((a*a+c*c)-b*b)/2*a*c);
 f = (((c*c+b*b)-a*a)/2*c*b);
 if((a+b<=c)||(b+c<=a)||(a+c<=b))/*checking the triangle is valid or not*/ 
     printf("Invalid Triangle");
 else
 {
   if((d<0)||(e<0)||(f<0))
     printf("Obtuse Triangle");
   else  
     {if((d=0)||(e=0)||(f=0))
        printf("Right Triangle");
      else
        if((d>0)&&(e>0)&&(f>0));
          printf("Acute Triangle");
    } 
 }
 
 
 return 0;
}