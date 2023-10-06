/*execute-result:OK*/
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
    for(i=0;i<50;i++)
    {
        for(r=0;r<50;r++)
        {
            if(a[i]==a[r] && r!=i)
                  printf("YES");
        }
    }
          	// Fill this area with your code.
	return 0;
}