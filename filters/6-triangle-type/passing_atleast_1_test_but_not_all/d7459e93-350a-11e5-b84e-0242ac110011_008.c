/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int s1, s2, s3, x, y; //s1, s2, s3 are sides of a triangle
    scanf("%d", &s1);
    scanf(" %d", &s2);
    scanf(" %d", &s3);
    x=((s1*s1)+(s2*s2)>(s3*s3))+((s3*s3)+(s1*s1)>(s2*s2))+((s3*s3)+(s2*s2)>(s1*s1));
    y=((s1*s1)+(s2*s2)==(s3*s3))+((s3*s3)+(s1*s1)==(s2*s2))+((s3*s3)+(s2*s2)==(s1*s1));
    switch(x){
        case 3: printf("Acute Triangle");
        break;
        case 2: printf("Obtuse Triangle");
        break;
        case 0: if(y==1) printf("Right Triangle");
        break;
        default: printf("Invalid Triangle");
    }
    return 0;
}