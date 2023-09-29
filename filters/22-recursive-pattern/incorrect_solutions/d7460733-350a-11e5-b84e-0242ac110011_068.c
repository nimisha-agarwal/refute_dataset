/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void call(int n,int flag,int i)
{ if(flag==1)
if(i>0)  
{      printf("%d",i);
    call(n,flag,i-5);
}
else
     
     {  printf(" %d",i);
    call(n,flag,i+5);
}
   if(flag==0)
{   if(i<n)
        printf(" %d",i+5);
    call(n,flag,i+5);}
}


int main(){
    int n;
    scanf("%d",&n);
 call(n,1,n);
 return 0;}