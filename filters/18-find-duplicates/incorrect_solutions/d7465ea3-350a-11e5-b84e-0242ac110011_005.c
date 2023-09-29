/*execute-result:OK*/
/*compile-errors:e160_280512.c:29:30: warning: incompatible integer to pointer conversion passing 'int' to parameter of type 'int *'; take the address with & [-Wint-conversion]
        printf("%d",check_duplicate(a[2]));
                                    ^~~~
                                    &
e160_280512.c:3:25: note: passing argument to parameter 'a' here
int check_duplicate(int a[n])
                        ^
e160_280512.c:29:30: warning: array index 2 is past the end of the array (which contains 2 elements) [-Warray-bounds]
        printf("%d",check_duplicate(a[2]));
                                    ^ ~
e160_280512.c:28:2: note: array 'a' declared here
        int a[]={1,1};
        ^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int n;
int check_duplicate(int a[n])
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
int main() {
	int a[]={1,1};
	printf("%d",check_duplicate(a[2]));
	return 0;
}