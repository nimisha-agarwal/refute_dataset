/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main()
{
  int n,j,p,i,k;
  scanf("%d",&n);
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
          printf("YES");
          k=1;
          break;
         }
      } if (k==1)
        break;
    }
        
      
      
	return 0;
}