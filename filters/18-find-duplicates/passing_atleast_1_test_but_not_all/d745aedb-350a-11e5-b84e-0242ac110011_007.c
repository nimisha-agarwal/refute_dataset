/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main()
{
  int n,j,p,i,k;
  scanf("%d\n",&n);
  int a[n];
  for (i=0;i<n;i++)
  {
    scanf("%d",&a[i]);      
  }
    for (j=0;j<n-1;j++)
    {
      for (p=j+1;p<n;p++)
      {
        if (a[j]==a[p])
         {
           k=1;     
          printf("YES");
          break;
         } 
      }  
        if (k==1)
        {break;}
        if (a[n-2]!=a[n-1])
        printf("NO");
    }
      
        
      
      
	return 0;
}