/*compile-errors:e160_280501.c:16:11: warning: unused variable 'j' [-Wunused-variable]
         int n,i,j;
                 ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int check(int a[],int n)
   { int i,j;
   for (i=0;i<n;i++)
      {for (j=1;j<n-i;j++)
         {if (a[i]==a[i+j])
           return 1;
             
         }
          
      }
     return 0;
       
   }
int main() {
	 int n,i,j;
	 scanf("%d",&n);
	 int a[n];
       for(i=0;i<n;i++)
	     { scanf("%d",&a[i]);}
	       if (check(a,n)==1)
	         printf("YES");
	       else if(check(a,n)==0)
	         printf("NO");
	return 0;
}