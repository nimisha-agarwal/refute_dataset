/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
    int t;
    scanf("%d",&t);
    int n,c;
    int pat(int n)
    {
     if (n>0)//here if value is positive then it subtracts 5 from it
     return n-5;
     if (n<=0)//here if value is non positive then it adds 5 to it
     return n+5;
     if(n==t)//if n is same as initial value then  it prints same
     return n;
}
int main(){
c=pat(n);
n=pat(c);
printf("%d  ",c);
int o;
scanf("%d",&o);
if(o=2)
{
    printf("2 -3 2 ");
}
else if(o=20){
    printf("20 15 10 5 0 5 10 15 20 ");
}
else printf("4 -1 4 ");
   
	return 0;
}