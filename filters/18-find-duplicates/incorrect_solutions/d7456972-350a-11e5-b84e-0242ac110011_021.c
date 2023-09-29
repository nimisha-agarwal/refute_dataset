/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() 
{   
    int n;
       scanf("%d",&n);
  {  
    int i; int j; int a[n];
     for(i=1;i<=n;i=i+1)
     { scanf("%d",&a[i]);
        for(j=i+1;j<n;j++)
        {
             if(a[j]==a[i])
             printf("YES\n");
             break;
        }
         
         break;
      }
  }
     return 0;
}