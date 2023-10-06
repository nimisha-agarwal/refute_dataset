/*compile-errors:e160_280443.c:6:13: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
        scanf("%d",a);
               ~~  ^
e160_280443.c:10:17: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
            scanf("%d",A[i]);
                   ~~  ^~~~
e160_280443.c:6:13: warning: variable 'a' is uninitialized when used here [-Wuninitialized]
        scanf("%d",a);
                   ^
e160_280443.c:5:7: note: initialize the variable 'a' to silence this warning
        int a,count=0;
             ^
              = 0
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	// Fill this area with your code.
	int a,count=0;
	scanf("%d",a);
	int A[a];
	for (int i=0;i<a;i++)
	{
	    scanf("%d",A[i]);
	}
    for (int j=0;j<a-1;j++)
    {
        for (int k=j+1;k<a;k++)
        {
           
            if(A[j]==A[k])
            {
                printf("YES");
                count = 1;
                break;
            }
        }
    }
    if (count ==0)
    {
        printf("NO");
    }
    
	return 0;
}