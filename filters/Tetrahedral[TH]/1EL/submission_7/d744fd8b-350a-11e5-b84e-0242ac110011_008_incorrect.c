/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{ int n;//no whose tetrahedral is required
  scanf("%d",&n);
  int i,j;
  int s=0,tot=0;//stores the sum 
  
  for(i=1;i<=n;i++)
     {   //tot=0;
         for(j=1;j<=i;j++)//loop to calculate sum of sub series
            {tot=tot+j;
            }
        s=s+tot; //sum of series   
     }
   printf("%d",s);
	return 0;
}