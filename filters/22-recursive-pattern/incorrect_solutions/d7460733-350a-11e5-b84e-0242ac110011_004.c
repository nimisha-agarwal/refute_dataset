/*compile-errors:e175_306021.c:8:1: warning: add explicit braces to avoid dangling else [-Wdangling-else]
else
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void call(int n,int flag,int i) // function declaration
{ if(flag==1)      // to stop loop at 0 or negative value
if(i>0)  
{      printf("%d",i);    // print no. before 0 or negative value
    call(n,flag,i-5);
}
else
     
     {  printf("%d",i);  
     if(flag==0)
    call(n,flag,i+5);
}
   
{   if(i<n)   
        printf(" %d",i+5); // print no. after o or negative value
    if(flag==0)  
    call(n,flag,i+5);}
}


int main(){
    int n;
    scanf("%d",&n);
 call(n,1,n);
 return 0;}