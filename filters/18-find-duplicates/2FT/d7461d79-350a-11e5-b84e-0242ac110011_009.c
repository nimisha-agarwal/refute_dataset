/*compile-errors:e160_280499.c:3:9: warning: unused variable 'k' [-Wunused-variable]
{   int k=0,c=0;                 /*which checks duplicate elements..*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void duplicate(int b[],int m)    /*declaring a function.....*/
{   int k=0,c=0;                 /*which checks duplicate elements..*/

    for(int k=0;k<m;k++)
        for(int j=1;j<m;j++)
            if(b[k]==b[j] && k!=j)
            c++;
    if(c>=2)
    printf("YES");
    else 
    printf("NO");
}
int main() 
{    
    int n;                           /*size of the array*/
    scanf("%d",&n);
    int a[n];                        /*declaring array..*/
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);           /*feeding values*/
    duplicate(a,n);
	// Fill this area with your code.
	return 0;
}