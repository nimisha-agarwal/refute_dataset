/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int s1,s2,s3;                  //Three sides of a triangle
    scanf("%d%d%d",&s1,&s2,&s3);
    
    //checking if triangle is valid
    
    if( ((s1+s2)<=s3) || ((s2+s3)<=s1) || ((s3+s1)<=s2) )
    {
        printf("Invalid Triangle");
    }
    else                           //if triangle is valid
    {
        if( (((s1*s1)+(s2*s2))>(s3*s3)) && (((s2*s2)+(s3*s3))>(s1*s1))         && (((s3*s3)+(s1*s1))>(s2*s2)) ) //checking acute angled
        {
            printf("Acute Triangle");
        }
        else
        if( (((s1*s1)+(s2*s2))==(s3*s3)) && (((s2*s2)+(s3*s3))==(s1*s1              ))&& (((s3*s3)+(s1*s1))==(s2*s2)) )//checking right angled
        {
            printf("Right Triangle");
        }
        else //it is obtuse if none of the cases matches
        {
            printf("Obtuse Triangle");
        }
    }
    return 0;
}