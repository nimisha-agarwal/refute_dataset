/*compile-errors:e160_280512.c:30:13: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
        scanf("%d",n);
               ~~  ^
e160_280512.c:34:17: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
            scanf("%d",a[i]);
                   ~~  ^~~~
e160_280512.c:35:24: warning: incompatible integer to pointer conversion passing 'int' to parameter of type 'int *'; take the address with & [-Wint-conversion]
            b=check_duplicate(a[i],n);
                              ^~~~
                              &
e160_280512.c:2:25: note: passing argument to parameter 'a' here
int check_duplicate(int a[],int n)
                        ^
e160_280512.c:30:13: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
        scanf("%d",n);
                   ^
e160_280512.c:28:9: note: initialize the variable 'n' to silence this warning
        int b,n,i;
               ^
                = 0
4 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int check_duplicate(int a[],int n)
{
    int i,j,b,c;
    c=0;
    for(i=0;i<n;i++)
    {
        b=a[i];
        for(j=0;j<n;j++)
        {
            if(a[j]==b)
            {
                c=c+1;
            }
        }
    }
    if(c>n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main() 
{
	int b,n,i;
	b=0;
	scanf("%d",n);
	int a[n];
	for(i=0;i<n;i++)
	{
	    scanf("%d",a[i]);
	    b=check_duplicate(a[i],n);
	}
	if(b>0)
	{
	    printf("YES");
	}
	else
	{
	    printf("NO");
	}
	
	return 0;
}