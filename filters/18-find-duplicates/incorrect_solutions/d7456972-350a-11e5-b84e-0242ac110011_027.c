/*compile-errors:e160_280464.c:11:17: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
         if(a[i]=a[i-1])
            ~~~~^~~~~~~
e160_280464.c:11:17: note: place parentheses around the assignment to silence this warning
         if(a[i]=a[i-1])
                ^
            (          )
e160_280464.c:11:17: note: use '==' to turn this assignment into an equality comparison
         if(a[i]=a[i-1])
                ^
                ==
e160_280464.c:6:12: warning: unused variable 'a' [-Wunused-variable]
       int a[n];
           ^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() 
{     int n;
       scanf("%d",&n);
       int a[n];
  {  
      int i=1;
      for(i=1;i<=n;i=i+1)
      {int a[i];
         if(a[i]=a[i-1])
          printf("NO");
        else
          printf("YES");
             
      }
  }  
     
	return 0;
}