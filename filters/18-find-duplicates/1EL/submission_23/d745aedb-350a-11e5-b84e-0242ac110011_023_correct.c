/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main()
{
  int n,j,p,i,k=0;/*all are integers*/
  scanf("%d",&n);/*take value of n*/
  int a[n];
  for (i=0;i<n;i++)
  {
    scanf("%d",&a[i]);/*taking the elements of array*/      
  }
    for (j=0;j<n-1;j++)
    {
      for (p=j+1;p<n;p++)
      {
        if (a[j]==a[p])
         {
           k=1;     
          printf("YES");/*if contain identical elements*/
          break;
         } 
      }  
        if (k==1)
        {break;}
        if ((j==n-2)&&(a[j]!=a[n-1]))
        printf("NO");/*if does not contain identical elements*/
    }
      
        
      
      
	return 0;
}