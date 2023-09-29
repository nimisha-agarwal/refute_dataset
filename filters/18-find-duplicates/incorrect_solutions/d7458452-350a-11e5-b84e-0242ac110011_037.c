/*execute-result:OK*/
/*compile-errors:e160_280470.c:8:9: warning: incompatible pointer to integer conversion returning 'int *' from a function with result type 'int'; dereference with * [-Wint-conversion]
        return a;
               ^
               *
e160_280470.c:4:15: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
    for(i=0;i<n;i++)
              ^
e160_280470.c:3:9: note: initialize the variable 'n' to silence this warning
{int i,n;
        ^
         = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int read(int a[])
{int i,n;
    for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	return a;
}
int main() {
	int n,i,j,flag=0;
	scanf("%d",&n);//scan
	int a[n];
    read(a);
	for(i=1;i<n;i++)//one loop to scan a[i]
	{
	    for(j=0;j<i;j++)//nested loop to scan a[j]
	    {
	        if(a[i]==a[j])//if a[i]==a[j] break off from all loops and print YES
	        {
	            printf("YES");
	            flag=1;
	            break;
	        }
	    
	    }
	    if(flag==1)
	    break;
	    
	}
	if(flag!=1)//since ith element does not match jth element flag=0 and all nos are distinct
	{
	printf("NO");
	}
	return 0;
}