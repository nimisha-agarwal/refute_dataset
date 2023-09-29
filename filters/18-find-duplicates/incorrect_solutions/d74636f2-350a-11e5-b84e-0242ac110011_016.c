/*execute-result:OK*/
/*compile-errors:e160_280506.c:12:11: warning: control may reach end of non-void function [-Wreturn-type]
return 0;}}
          ^
e160_280506.c:4:15: warning: variable 'b' is uninitialized when used here [-Wuninitialized]
for(int i=0;i<b;i++)
              ^
e160_280506.c:3:7: note: initialize the variable 'b' to silence this warning
{int b;
      ^
       = 0
e160_280506.c:20:14: warning: incompatible integer to pointer conversion passing 'int' to parameter of type 'int *'; take the address with & [-Wint-conversion]
        k = similar(a[i]);
                    ^~~~
                    &
e160_280506.c:2:17: note: passing argument to parameter 'x' here
int similar(int x[])//function declaration.
                ^
e160_280506.c:16:8: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
        int a[n];
              ^
e160_280506.c:15:12: note: initialize the variable 'n' to silence this warning
    int i,n,k;
           ^
            = 0
4 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int similar(int x[])//function declaration.
{int b;
for(int i=0;i<b;i++)
{int y,z;
y = x[i];
for(int j=0;j<b;j++)
{z = x[j];}
if (y==z)
return 1;
else 
return 0;}}
int main()
{
    int i,n,k;
	int a[n];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{scanf("%d",&a[i]);}
	k = similar(a[i]);
	if (k==1) printf("YES");
	else printf("NO");
	return 0;
}