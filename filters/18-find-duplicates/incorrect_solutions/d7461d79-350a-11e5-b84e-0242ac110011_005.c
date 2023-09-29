/*compile-errors:e160_280499.c:3:7: warning: unused variable 'k' [-Wunused-variable]
{ int k=0,c=0;
      ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void duplicate(int b[],int m)
{ int k=0,c=0;

 for(int k=0;k<m/2;k++)
    for(int j=1;j<m;j++)
        if(b[k]==b[j])
        c++;
    

if(c>=2)
printf("yes");}
int main() { int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
duplicate(a,n);
	// Fill this area with your code.
	return 0;
}