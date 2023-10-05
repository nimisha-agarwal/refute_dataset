/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a*a+b*b>c*c){printf("Triangle is Acute");}
else if(a*a+b*b<c*c){printf("Triangle is Obtuse");}
else if(a*a+b*b==c*c){printf("Triangle is Right Angled");}
else{printf("Invalid Triangle");}
    return 0;
}