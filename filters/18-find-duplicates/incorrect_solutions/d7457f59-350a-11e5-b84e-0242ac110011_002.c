/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int i,j,k;
    int c=0;//dummy variable defined
    int n;
   
     scanf("%d",&n);
     int array[n];
     for(i=0;i<=n;i=i+1)
     {scanf("%d",&array[i]);}//taking input for array
    
    for(k=0;k<=n;k=k+1)
    {
        for (j=0;j<=n;j=j+1)
        {
            if (array[k]==array[j]&&k!=j)//code must satisfy both these condition
            
            {printf("YES");
            c=1;
            }
            break;
            
            
            
        }
       
    }
    
    if (c==0) printf("NO");
    
    
	// Fill this area with your code.
	return 0;
}