/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;
    int check;
    int max;
    scanf("%d%d%d",&a,&b,&c);
    if(((a+b>c)&&(b+c>a)&&(c+a>b))!=0)
    { 
        printf(" Invalid Triangle");
    }
    
    else
    {  
        max=a;
        if(b>=a)
        { max=b;
          if(c>=b)
          max=c;
          
        }
        else
        { if(c>=a)
          max=c;
        }
        
           if(max==c)  
          { 
             check=b*b+a*a-c*c;
             if(check>0)
             printf("Acute Triangle");
             
             else if(check<0)
             printf("Obtuse Triangle");
             
             else
             printf("Right Triangle");
          }
          else if(max==a)
          { check=b*b+c*c-a*a;
          if(check>0)
           printf("Acute Triangle");
          else if(check<0)
           printf("Obtuse Triangle");
          else
          printf("Right Triangle");
    }   
    else
    { check=a*a+c*c-b*b;
          if(check>0)
           printf("Acute Triangle");
          else if(check<0)
           printf("Obtuse Triangle");
          else
          printf("Right Triangle");
    }
    
    }  
    return 0;
}