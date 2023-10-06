/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
    {
        int n;
        int i, j;
        int sum=0;
        int sumt=0;
        scanf ("%d", &n);
        for (i=1; i<=n; i++)
            {
                for (j=1; j<=i; j++)
                    {
                        sum = sum+j;
                    }
                sumt = sumt+sum;    
            }
        printf ("%d", sumt);
	//Enter your code here
	return 0;
    }