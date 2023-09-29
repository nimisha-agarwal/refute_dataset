/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{ int n;//no whose tetrahedral is required
  scanf("%d",&n);
  int i,j;
  int s=0;//stores the sum 
  
  for(i=0;i<n;i++)
     { int tot=0;
         for(j=0;j<i;j++)
            {tot=tot+j;
            }
        s=s+tot;    
     }
     printf("%d",s);
	return 0;
}