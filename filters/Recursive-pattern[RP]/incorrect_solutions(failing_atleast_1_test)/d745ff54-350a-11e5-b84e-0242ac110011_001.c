/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int n,midindex;

void pattern(int x,int index)
{  if(x>n)
   return;

   printf("%d ",x);
   
   if(index>=midindex)
   pattern(x+5,index+1);
   if(index<midindex)
   pattern(x-5,index+1);
   
   
   
}


int main(){
    
    scanf("%d",&n);
    if(n%5==0)
    midindex=n/5;
    else
    midindex=(n/5)+1;
    printf("%d",midindex);
    pattern(n,0);
    
    
    
	return 0;
}