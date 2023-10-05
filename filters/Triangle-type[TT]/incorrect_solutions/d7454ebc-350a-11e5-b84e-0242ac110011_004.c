/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,big_s;
    scanf("%d %d %d",&a,&b,&c);
    
    if (((a+b)>c) && ((a+c)>b) && ((b+c)>a))
    {
        if ((a>b>c) || (a>c>b))
        { big_s=0;}
        else if ((b>a>c) || (b>c>a))
        { big_s=1;}
        else
        { big_s=2;}
        
        switch(big_s)
        
        {
        
        /*case 0 : 
        {
            if ((b*b)+(c*c)<(a*a))
            {printf("Obtuse Triangle");}
            else if ((b*b)+(c*c)==(a*a))
            {printf("Right Triangle");}
            else
            {printf("Acute Triangle");}
            break;
        }*/
    
        case 1 :
        {
            if ((a*a)+(c*c)<(b*b))
            {printf("Obtuse Triangle");}
            else if ((a*a)+(c*c)==(b*b))
            {printf("Right Triangle");}
            else
            {printf("Acute Triangle");}
            break;
        }
        
        /*case 2 :
        {
            if ((b*b)+(a*a)<(c*c))
            {printf("Obtuse Triangle");}
            else if ((b*b)+(a*a)==(c*c))
            {printf("Right Triangle");}
            else
            {printf("Acute Triangle");}
            break;
        }*/
        
        default : {printf("Invalid Triangle");}
        
        }
    
            
            
            
            
            
            
    }
    
    else
    {
        printf("Invalid Triangle");
    }
    
    
    return 0;
}