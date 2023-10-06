/*compile-errors:e156_271832.c:5:24: warning: unused variable 'y' [-Wunused-variable]
    int s1, s2, s3, x, y, a, b, c; //s1, s2, s3 are sides of a triangle
                       ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int s1, s2, s3, x, y, a, b, c; //s1, s2, s3 are sides of a triangle
    scanf("%d", &s1);
    scanf(" %d", &s2);
    scanf(" %d", &s3);
    a=(s1*s1)+(s2*s2)-(s3*s3);
    b=(s3*s3)+(s1*s1)-(s2*s2);
    c=(s3*s3)+(s2*s2)-(s1*s1);
    x=(a==0)+(b==0)+(c==0);
    switch((a>0)+(b>0)+(c>0)){
        case 3: printf("Acute Triangle");
        break;
        case 2: if(x==1) printf("Right Triangle");
                else
                printf("Obtuse Triangle");
        break;
        default: printf("Invalid Triangle");
    }
    return 0;
}