/*execute-result:OK*/
/*compile-errors:e160_280506.c:18:1: warning: control may reach end of non-void function [-Wreturn-type]
} //end of function.
^
e160_280506.c:27:18: warning: incompatible integer to pointer conversion passing 'int' to parameter of type 'int *'; take the address with & [-Wint-conversion]
            k = similar(a[n]);//function calling.
                        ^~~~
                        &
e160_280506.c:2:17: note: passing argument to parameter 'X' here
int similar(int X[])//function declaration.
                ^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int similar(int X[])//function declaration.
{
    int b=0;//number of elements in array.
    for(int i=0;i<b;i++)
    {
        int y,z;
        y = X[i];
        for(int j=0;j<b;j++)
        {
            z = X[j];
        }
        if (y==z)
        return 1;
        else 
        return 0;
    }
} //end of function.
int main()
{
    int i,n,k;//declaration of varaible.
    scanf("%d",&n);//scan the number of elements in array.
	int a[n];//declaration of array.
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);//scan the elements of array.
	    k = similar(a[n]);//function calling.
	if (k==1) printf("YES");
	else printf("NO");
	}
	return 0;
}