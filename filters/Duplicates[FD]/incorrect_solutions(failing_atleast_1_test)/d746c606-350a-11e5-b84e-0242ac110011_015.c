/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int i,r;
    int a[50];
    int n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(r=0;r<n;r++)
        {
            if(a[i]==a[r] && r!=i)
                  printf("YES");
                  else
                  {
                      printf("NO");
                  }
        }
    }
          	// Fill this area with your code.
	return 0;
}