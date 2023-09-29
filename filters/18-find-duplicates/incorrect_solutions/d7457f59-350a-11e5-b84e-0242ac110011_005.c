/*compile-errors:e160_280468.c:28:14: warning: equality comparison result unused [-Wunused-comparison]
            c==1;
            ~^~~
e160_280468.c:28:14: note: use '=' to turn this equality comparison into an assignment
            c==1;
             ^~
             =
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int i,j,k;
    int c=0;
    int n;
   
     scanf("%d",&n);
     int array[n];
     for(i=0;i<=n;i=i+1)
     {scanf("%d",&array[i]);}
    
    
    
    
    
    
    
    
    
    
    for(k=0;k<=n;k=k+1)
    {
        for (j=0;j<=n;j=j+1)
        {
            if (array[k]==array[j])
            {printf("YES");
            c==1;
            }
            break;
            
            
        }
       
    }
    
    if (c==0) printf("NO");
    
    
	// Fill this area with your code.
	return 0;
}