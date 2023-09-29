/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int main(){
    int n,a;
    a=n;
    scanf("%d",&n);
    while(a!=n)
{  a=a-5;
   a++;}
   printf("%d",a);
    

    
	return 0;
}