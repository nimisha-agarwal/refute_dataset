/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{ 
    int x,y,z; /* 3 sides of a triangle*/
int a,b,c;
 scanf("%d %d %d",&x,&y,&z);
 
 if (x<=y && y>=z) {a=x; b=y; c=z; }
 if (x<=z && z>=y) {a=x; b=z; c=y; }
 if (y<=x && x>=z) {a=y; b=x; c=z; }
   if (a+c>=b) 
   {
 if (a*a+c*c==b*b) {
     printf("Right Triangle");
 }
else if (a*a+c*c>=b*b) {
    printf("Acute Triangle");
}
else if (a*a+c*c<=b*b) {
    printf("Obtuse Triangle");
}
}
else if (a+c<b) {
    printf("Invalid Triangle");
}

 
 return 0;
}