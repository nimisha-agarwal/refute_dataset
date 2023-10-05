/*compile-errors:e160_280464.c:7:12: warning: unused variable 'a' [-Wunused-variable]
       int a[n];
           ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() 
{   
    int n;
       scanf("%d",&n);
       int a[n];
  {  
    int i;
   for(i=1;i<=n;i=i+1)
    { 
        int j;
        for(j=i+1;j<n;j++)
        {
            int a[j];
            if(a[j]!=a[j-1])
          printf("NO\n");
            
        else
          printf("YES");
             break;}
             break;
      }
  }  
     
	return 0;
}