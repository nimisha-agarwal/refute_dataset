/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int main() 
{
int a;
scanf("%d",&a);
int search(int a[],int x,int key);
int x;
char key;
    if(x<=0)
    printf("%d",x);
    
    return search(a,x-1,key);


return 0;
}