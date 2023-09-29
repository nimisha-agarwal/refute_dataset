/*compile-errors:e160_280464.c:6:9: warning: unused variable 'a' [-Wunused-variable]
    int a[n];
        ^
e160_280464.c:6:11: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
    int a[n];
          ^
e160_280464.c:5:10: note: initialize the variable 'n' to silence this warning
    int n;
         ^
          = 0
e160_280464.c:10:25: warning: variable 'j' is uninitialized when used here [-Wuninitialized]
    int i; int j; int a[j];
                        ^
e160_280464.c:10:17: note: initialize the variable 'j' to silence this warning
    int i; int j; int a[j];
                ^
                 = 0
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() 
{   
    int n;
    int a[n];
    
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