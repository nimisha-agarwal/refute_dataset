/*compile-errors:e160_280446.c:13:11: warning: equality comparison with extraneous parentheses [-Wparentheses-equality]
        if ((a[i]==a[j]))
             ~~~~^~~~~~
e160_280446.c:13:11: note: remove extraneous parentheses around the comparison to silence this warning
        if ((a[i]==a[j]))
            ~    ^     ~
e160_280446.c:13:11: note: use '=' to turn this equality comparison into an assignment
        if ((a[i]==a[j]))
                 ^~
                 =
e160_280446.c:17:14: warning: equality comparison with extraneous parentheses [-Wparentheses-equality]
     if((a[k]==a[j]))
         ~~~~^~~~~~
e160_280446.c:17:14: note: remove extraneous parentheses around the comparison to silence this warning
     if((a[k]==a[j]))
        ~    ^     ~
e160_280446.c:17:14: note: use '=' to turn this equality comparison into an assignment
     if((a[k]==a[j]))
             ^~
             =
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int a[50],i,j,k;
	i=0;
	for(i=0;i<1;i=i+1)
	{
	    scanf("%d\n",&(a[i]));
	j=1;
	for(j=1;j<a[i];j=j+1)
	{
	scanf("%d",&(a[j]));
	if ((a[i]==a[j]))
	printf("YES");
	for(k=2;k>j;k=k+1)
     {
     if((a[k]==a[j]))
	printf("YES");
	else
	printf("NO");
	}
	   }
	     }
	     return 0;
}