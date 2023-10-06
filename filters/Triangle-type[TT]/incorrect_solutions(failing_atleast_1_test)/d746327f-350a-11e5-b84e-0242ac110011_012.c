/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;  /*a,b,c are declared as int variables*/
    scanf("%d%d%d", &a,&b,&c);/*values of a,b,c are taken from input*/
    if((c>a)&&(c>b)&&(a+b>c))//c is largest side
    {
        if(a*a+b*b==c*c)//condition for right angled triangle
        {
            printf("Right Triangle\n");//prints right triangle 
        }
        else
        {
            if(a*a+b*b>c*c)//condition for acute triangle 
            {
                printf("Acute Triangle\n");
            }
            else
            {
                printf("Obtuse Triangle\n");
            }
        }   
    }
    if((b>a)&&(b>c)&&(a+c>b))//b is largest side
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
    if((a>b)&&(a>c)&&(b+c>a))//a is largest side
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
    if(a>b+c||(b>a+c)||(c>a+b))//condition for impossibility of                                                                  triangle
    { 
        printf("Invalid Triangle");
    }
    return 0;
}