/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if((a+b<=c)||(b+c<=a)||(c+a<=b)){printf("Inavalid Triangle");}
else if(a*a+b*b>c*c){printf("Acute Triangle");}
else if(a*a+b*b<c*c){printf("Obtuse Triangle");}
else if(a*a+b*b==c*c){printf("Right Triangle");}
else{printf("Invalid Triangle");}
    return 0;
}