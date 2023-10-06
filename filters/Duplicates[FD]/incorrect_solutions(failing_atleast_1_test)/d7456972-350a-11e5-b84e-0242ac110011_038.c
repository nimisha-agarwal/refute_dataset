/*compile-errors:e160_280464.c:9:25: warning: variable 'j' is uninitialized when used here [-Wuninitialized]
    int i; int j; int a[j];
                        ^
e160_280464.c:9:17: note: initialize the variable 'j' to silence this warning
    int i; int j; int a[j];
                ^
                 = 0
e160_280464.c:11:21: warning: variable 'i' is uninitialized when used here [-Wuninitialized]
    scanf("%d%d",&a[i],&a[j]);
                    ^
e160_280464.c:9:10: note: initialize the variable 'i' to silence this warning
    int i; int j; int a[j];
         ^
          = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() 
{   
    int n;
    
       scanf("%d",&n);
  {  
    int i; int j; int a[j];
    
    scanf("%d%d",&a[i],&a[j]);
    
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