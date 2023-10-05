/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);
    if((c>a)&&(c>b)&&(a+b>c))
    {
        if(a*a+b*b==c*c)
        {
            printf("Right Triangle\n");
        }
        else
        {
            if(a*a+b*b>c*c)
            {
                printf("Acute Triangle\n");
            }
            else
            {
                printf("Obtuse Triangle\n");
            }
        }   
    }
    if((b>a)&&(b>c)&&(a+c>b))
    {
        if(b*b==a*a+c*c)
        {
            printf("Right Triangle");
        }
        else
        {
            if(a*a+c*c>b*b)
            {
                printf("Acute Triangle");
            }
            else
            {
                printf("Obtuse Triangle");
            }
        }
    }    
    if((a>b)&&(a>c)&&(b+c>a))
    {
            if(a*a==b*b+c*c)
            {
             printf("Right Triangle");
            } 
            else
            {
                if(b*b+c*c>a*a)
                {
                    printf("Acute Triangle");
                }
                 else
                {
                    printf("Obtuse Triangle");
                }
            }  
    }        
    if(a>b+c||(b>a+c)||(c>a+b))
    { 
        printf("Invalid Triangle");
    }
    return 0;
}