/*compile-errors:e160_280506.c:12:11: warning: control may reach end of non-void function [-Wreturn-type]
return 0;}}//end of function.
          ^
e160_280506.c:19:14: warning: incompatible integer to pointer conversion passing 'int' to parameter of type 'int *'; take the address with & [-Wint-conversion]
        k = similar(a[i]);
                    ^~~~
                    &
e160_280506.c:2:17: note: passing argument to parameter 'X' here
int similar(int X[])//function declaration.
                ^
e160_280506.c:16:8: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
        int a[n];//declaration of array.
              ^
e160_280506.c:15:12: note: initialize the variable 'n' to silence this warning
    int i,n,k;//declaration of varaible.
           ^
            = 0
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int similar(int X[])//function declaration.
{int b=0;//number of elements in array.
for(int i=0;i<b;i++)
{int y,z;
y = X[i];
for(int j=0;j<b;j++)
{z = X[j];}
if (y==z)
return 1;
else 
return 0;}}//end of function.
int main()
{
    int i,n,k;//declaration of varaible.
	int a[n];//declaration of array.
	scanf("%d",&n);//scan the number of elements in array.
	for(i=0;i<n;i++) {scanf("%d",&a[i]);}//scan the elements of array.
	k = similar(a[i]);
	if (k==1) printf("YES");
	else printf("NO");
	return 0;
}