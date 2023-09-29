/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
 int t;
    scanf("%d",&t);
    int n,c;
    int pat(int n)
    {
     if (n>0)
     return n-5;
     if (n<=0)
     return n+5;
     if(n==t)
     return n;
}

c=pat(n);
n=pat(c);
printf("%d",c);
int main(){
   
	return 0;
}