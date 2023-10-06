/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void call(int i,int flag,int n)
{ if(flag==1)

{if(i<=0)
 flag==0;}

if(i>0)
{printf("%d",i);
call(i-5,1,n);}}

{if(flag==0)
{ printf("%d",i)}

if(i<n)
call(i+5,0,n)

else 

return 0;}

int main(){
    int n;
    scanf("%d",&n);
 call(n,1,n);
 return 0;}
 