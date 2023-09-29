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
    int s1,s2,s3;
    if(a>=b)
    {
       if(a>=c)
       {
           s1=a; 
           if(b>=c)
           {
               s2=b;
               s3=c;
           }
           else
           {
               s2=c;
               s3=b;
           }
       }
       else
       {
            s1=c;
            s2=a;
            s3=b;
       }
    }
    else
    {
        if(b>=c)
        {
            s1=b;
            if(a>=c)
            {
                s2=a;
                s3=c;
            }
            else
            {
                s2=c;
                s3=a;
            }
        }
        else
        {
            s1=c;
            s2=b;
            s3=c;
        }
    }
    if(((s2+s3)>s1)&&((s1-s2)<s3))
    {
      int sum= (s3*s3)+(s2*s2) -(s1*s1);
      if(sum==0)
      printf("Right Triangle");
      else if(sum>0)
      printf("Acute Triangle");
      else
      printf("Obtuse Triangle");
    }
    else
    {
      printf("Invalid Triangle");
    }
    return 0;
}