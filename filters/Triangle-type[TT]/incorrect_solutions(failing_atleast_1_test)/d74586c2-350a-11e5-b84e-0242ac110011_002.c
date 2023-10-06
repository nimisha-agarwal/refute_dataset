/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
void check(int,int,int); //function to check triangle conditions
int main()
{
        int a=0,b=0,c=0; //a,b,c are the sides of the triangle
    scanf("%d%d%d",&a,&b,&c);
    if (a>b)
    {
        if(a>c)
            check(a,b,c); //largest variable passed 1st to simplify
                          //calculations check function code
        else
            check(c,a,b);
    }
    else
    {
        if(b>c)
            check(b,a,c);
        else
            check(c,b,a);
    }
    return 0;
}

void check(int bigside,int side1,int side2) //bigside is the largest
                                            //side
{
    if(bigside>side1+side2)
        printf("Invalid Triangle");
    else
    {
        if((bigside*bigside)>((side1*side1)+(side2*side2)))
            printf("Obtuse Triangle");
        else if((bigside*bigside)<((side1*side1)+(side2*side2)))
            printf("Acute Triangle");
        else
            printf("Right Triangle");
    }
}