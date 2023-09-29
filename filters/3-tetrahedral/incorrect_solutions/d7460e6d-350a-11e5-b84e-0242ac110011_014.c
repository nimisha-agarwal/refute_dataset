/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
    {
        int n;
        scanf ("%d", &n);
        int i, j;
        int sumt;
        for (i=1; i<=n; i++)
            {
                int sum1 = 0;
                for (j=1; j<=i; j++)
                    {
                        sum1 = sum1+j;
                    }
                sumt = sumt+sum1;    
            }
        printf ("%d", sumt);
	//Enter your code here
	return 0;
    }