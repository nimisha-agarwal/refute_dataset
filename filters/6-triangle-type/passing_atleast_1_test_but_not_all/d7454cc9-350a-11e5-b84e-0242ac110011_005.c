/*execute-result:OK*/
/*compile-errors:e156_271811.c:8:12: warning: variable 'c' is uninitialized when used here [-Wuninitialized]
        a1=c;
           ^
e156_271811.c:5:23: note: initialize the variable 'c' to silence this warning
    int a1,b1,c1,a,b,c;
                      ^
                       = 0
e156_271811.c:10:12: warning: variable 'a' is uninitialized when used here [-Wuninitialized]
        b1=a;
           ^
e156_271811.c:5:19: note: initialize the variable 'a' to silence this warning
    int a1,b1,c1,a,b,c;
                  ^
                   = 0
e156_271811.c:9:12: warning: variable 'b' is uninitialized when used here [-Wuninitialized]
        c1=b;
           ^
e156_271811.c:5:21: note: initialize the variable 'b' to silence this warning
    int a1,b1,c1,a,b,c;
                    ^
                     = 0
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a1,b1,c1,a,b,c;
    scanf("%d %d %d",&a1,&b1,&c1);// Fill this area with your code.
    if(a1>=b1 && a1>=c1){
        a1=c;
        c1=b;
        b1=a;
        
    }
    else if(b1>=a1 && b1>=c1)
    {
        b1=c;
        c1=a;
        a1=b;
    }
    
    else
    {
        a1=a;
        b1=b;
        c1=c;
    }    //if(c>=b && c>=a)
    //{
        if(c>=a+b)
            printf("Invalid Triangle");
        else
        {
            if(c*c>a*a + b*b)
                printf("Obtuse Triangle");
            else if(c*c==a*a+b*b)
            {
                printf("Right Triangle");
            }
            else{
                printf("Acute Triangle");
            }
        }
    //}
    return 0;
}