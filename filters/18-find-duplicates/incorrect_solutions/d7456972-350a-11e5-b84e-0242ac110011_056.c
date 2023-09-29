/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() 
{   
    int n;
       scanf("%d",&n);
  {  
    int i;
   for(i=1;i<=n;i=i+1)
    { 
        int j;
        for(j=i+1;j<n;j++)
        {
            int a[j];
            if(a[j]==a[i])
          printf("YES\n");
          return i;
             break;
        }
         
      }
  }
     
	return 0;
}