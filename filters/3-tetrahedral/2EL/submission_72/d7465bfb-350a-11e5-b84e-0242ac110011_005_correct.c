/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int main()
{
    int a,s=0,nth_no=0,i;
    scanf("%d",&a);
    for(i=0;i<=a;i++)
    {
        s=s+i;
        nth_no = nth_no+s;
    }
        printf("%d",nth_no);
    return 0;
}