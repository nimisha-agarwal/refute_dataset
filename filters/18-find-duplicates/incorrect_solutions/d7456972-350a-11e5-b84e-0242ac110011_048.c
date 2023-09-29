/*compile-errors:e160_280464.c:8:25: warning: variable 'j' is uninitialized when used here [-Wuninitialized]
    int i; int j; int a[j];
                        ^
e160_280464.c:8:17: note: initialize the variable 'j' to silence this warning
    int i; int j; int a[j];
                ^
                 = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() 
{   
    int n;
       scanf("%d",&n);
  {  
    int i; int j; int a[j];
   for(i=1;i<=n;i=i+1)
    { 
       
        for(j=i+1;j<n;j++)
        {
            
            if(a[j]==a[i])
             printf("YES\n");
          
             break;
        } 
        printf("NO");
         break;
      }
  }
     
	return 0;
}