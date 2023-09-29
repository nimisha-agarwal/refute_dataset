/*compile-errors:e160_280501.c:10:11: warning: unused variable 'j' [-Wunused-variable]
         int n,i,j;
                 ^
e160_280501.c:11:8: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
        int a[n];
              ^
e160_280501.c:10:8: note: initialize the variable 'n' to silence this warning
         int n,i,j;
              ^
               = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int check(int a[],int n)
   { int i,j;
   for (i=0;i<n;i++)
      {for (j=1;j<n-i;j++)
        {if (a[i]==a[j])
        return 1;}}
        return 0;}
int main() {
	 int n,i,j;
	int a[n];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	 { scanf("%d",&a[i]);}
	if (check(a,n)==1)
	  printf("YES");
	else if(check(a,n)==0)
	  printf("NO");
	return 0;
}