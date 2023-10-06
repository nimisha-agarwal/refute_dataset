/*execute-result:OK*/
/*compile-errors:e156_271860.c:5:9: warning: unused variable 'x' [-Wunused-variable]
    int x,y,z; /* 3 sides of a triangle*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int x,y,z; /* 3 sides of a triangle*/
    int a,b,c;
 scanf("%d %d %d",&a,&b,&c);
     {if (a<c>b){
 if (a*a+c*c==b*b) {
     printf("Right Triangle");
 }
else if (a*a+c*c>=b*b) {
    printf("Obtuse Triangle");
}
else if (a*a+c*c<=b*b) {
    printf("Acute Triangle");
}
else if (a+c<b) {
    printf("Invalid Triangle");
}
}
 }
 return 0;
}