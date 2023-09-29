/*execute-result:OK*/
/*compile-errors:e158_277905.c:8:13: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
  for(i=0;i<n;i++)
            ^
e158_277905.c:4:8: note: initialize the variable 'n' to silence this warning
{ int n;//no whose tetrahedral is required
       ^
        = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{ int n;//no whose tetrahedral is required
  int i,j;
  int s=0;//stores the sum 
  
  for(i=0;i<n;i++)
     { int tot=0;
         for(j=0;j<i;j++)
            {tot=tot+j;
            }
        s=s+tot;    
     }
	return 0;
}