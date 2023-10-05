/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
   
    int i,a[n],s;
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    
    for(s=0;s<n;s++){
    for(i=s+1;i<n;i++)
    {
        if(a[s]==a[i])
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    }
   
   
       
   
	// Fill this area with your code.
	return 0;
}