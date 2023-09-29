/*execute-result:OK*/
/*compile-errors:e160_280467.c:4:12: warning: unknown escape sequence '\d'
    scanf("\d\n",&b);
           ^~
e160_280467.c:4:18: warning: data argument not used by format string [-Wformat-extra-args]
    scanf("\d\n",&b);
          ~~~~~~ ^
e160_280467.c:8:16: warning: unknown escape sequence '\d'
        scanf("\d ",&a[i]);
               ^~
e160_280467.c:8:21: warning: data argument not used by format string [-Wformat-extra-args]
        scanf("\d ",&a[i]);
              ~~~~~ ^
e160_280467.c:21:25: warning: multiple unsequenced modifications to 'count' [-Wunsequenced]
                    count=count++;
                         ~     ^
5 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int main() {
    int b,i,j,k,count=0;
    scanf("\d\n",&b);
    int a[b];
    for(i=0;i<b;i++)
    {
        scanf("\d ",&a[i]);
    }
	for(j=0;j<b;j++)
	{
	    for(k=j+1;k<b;k++)
	    {
	        if(a[j]==a[k])
	        {
	            printf("YES");
	            break;
	        }
	        else
	        {
	            count=count++;
	        }
	    }
	}
	if(count==b-1)
	{
	    printf("NO");
	}
	return 0;
}