/*compile-errors:e160_280472.c:20:20: warning: equality comparison with extraneous parentheses [-Wparentheses-equality]
                 if((s[k] == s[j]))
                     ~~~~~^~~~~~~
e160_280472.c:20:20: note: remove extraneous parentheses around the comparison to silence this warning
                 if((s[k] == s[j]))
                    ~     ^      ~
e160_280472.c:20:20: note: use '=' to turn this equality comparison into an assignment
                 if((s[k] == s[j]))
                          ^~
                          =
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
	int s[n];
	int i;
	for(i=0;i<n;i++)
	{
	    scanf("%d",&s[i]);
	}
	int j,k;
	for (j=0;j<n;j++)
	{
	 for(k=0;k<n;k++)
	 {
	     if(k!=j)
	     {
	         if((s[k] == s[j]))
	         {
	             printf("YES");
	         }else{
	               break;
	              }
	     }
	 }
	}
	printf("NO");
	
	return 0;
}