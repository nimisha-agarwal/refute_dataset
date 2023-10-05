/*execute-result:OK*/
/*compile-errors:e160_280472.c:29:7: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
         if(m=1)
            ~^~
e160_280472.c:29:7: note: place parentheses around the assignment to silence this warning
         if(m=1)
             ^
            (  )
e160_280472.c:29:7: note: use '==' to turn this assignment into an equality comparison
         if(m=1)
             ^
             ==
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
	int j,k,m;
	m=0;
	for (j=0;j<n;j++)
	{
	 for(k=0;k<n;k++)
	 {
	     if(k!=j)
	     {
	         if(s[k] == s[j])
	          {
	             printf("YES");
	             m=1;
	             break;
	          }
	     }
	 }
	 if(m=1)
	 break;
	}
	printf("NO");
	
	
	return 0;
}