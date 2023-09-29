/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int i,j,n;
    scanf("%d",&n);
    int a[n];
      for(i=0; i<n; i=i+1)
      {
          scanf("%d",&a[i]);
      }
      for(i=0; i<n; i=i+1)
      {
       for(j=i+1; j<n; j=j+1)
       {
           if(a[i]==a[j])
           {
               printf("YES");
             return 0;
           } 
           else
           printf("NO");
        }
      }
	// Fill this area with your code.
	return 0;                                                            }