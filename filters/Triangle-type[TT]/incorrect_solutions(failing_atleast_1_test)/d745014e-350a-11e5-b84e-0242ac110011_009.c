/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c,temp;
    scanf("%d %d %d",&a,&b,&c);
    while(!((a<=b)&&(b<=c)))
    {
        if(b<a)
        {
            temp=a;
            a=b;
            b=temp;
        }
        if(c<b)
        {
            temp=b;
            b=c;
            c=temp;
        }
    }
    if((a+b)<c)
      printf("Invalid Triangle");
    else
    {
        if((a*a+b*b)>(c*c))
          printf("Acute Triangle");
        else if((a*a+b*b)==(c*c))
          printf("Right Triangle");
        else
          printf("Obtuse Triangle");
    }
    return 0;
}