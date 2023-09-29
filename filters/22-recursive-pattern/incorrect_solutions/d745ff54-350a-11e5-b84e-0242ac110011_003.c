/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int n,k=1;

void pattern(int x)
{
   printf("%d ",x);
   
   
   if(x<=0)
   {
       k=0;
       return;
       
   }
   
   
   if(k==1)
   pattern(x-5);
}


int main(){
    
    scanf("%d",&n);
    
    pattern(n);
    
    
    
	return 0;
}