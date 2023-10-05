/*compile-errors:e160_280506.c:8:6: warning: unused variable 'z' [-Wunused-variable]
{int z = x[j];}}
     ^
e160_280506.c:6:6: warning: unused variable 'y' [-Wunused-variable]
{int y = x[i];
     ^
e160_280506.c:9:5: warning: variable 'y' is uninitialized when used here [-Wuninitialized]
if (y==z)
    ^
e160_280506.c:4:6: note: initialize the variable 'y' to silence this warning
int y,z;
     ^
      = 0
e160_280506.c:9:8: warning: variable 'z' is uninitialized when used here [-Wuninitialized]
if (y==z)
       ^
e160_280506.c:4:8: note: initialize the variable 'z' to silence this warning
int y,z;
       ^
        = 0
e160_280506.c:5:15: warning: variable 'b' is uninitialized when used here [-Wuninitialized]
for(int i=0;i<b;i++)
              ^
e160_280506.c:3:7: note: initialize the variable 'b' to silence this warning
{int b;
      ^
       = 0
e160_280506.c:21:14: warning: incompatible integer to pointer conversion passing 'int' to parameter of type 'int *'; take the address with & [-Wint-conversion]
        k = similar(a[i]);
                    ^~~~
                    &
e160_280506.c:2:17: note: passing argument to parameter 'x' here
int similar(int x[])//function declaration.
                ^
e160_280506.c:17:8: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
        int a[n];
              ^
e160_280506.c:16:12: note: initialize the variable 'n' to silence this warning
    int i,n,k;
           ^
            = 0
7 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int similar(int x[])//function declaration.
{int b;
int y,z;
for(int i=0;i<b;i++)
{int y = x[i];
for(int j=0;j<b;j++)
{int z = x[j];}}
if (y==z)
return 1;
else 
return 0;
}
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