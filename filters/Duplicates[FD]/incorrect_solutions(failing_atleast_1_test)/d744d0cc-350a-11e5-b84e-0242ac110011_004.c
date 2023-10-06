/*compile-errors:e160_280446.c:15:13: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
     if(a[i]=a[j])
        ~~~~^~~~~
e160_280446.c:15:13: note: place parentheses around the assignment to silence this warning
     if(a[i]=a[j])
            ^
        (        )
e160_280446.c:15:13: note: use '==' to turn this assignment into an equality comparison
     if(a[i]=a[j])
            ^
            ==
e160_280446.c:17:18: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
     else if(a[k]=a[j])
             ~~~~^~~~~
e160_280446.c:17:18: note: place parentheses around the assignment to silence this warning
     else if(a[k]=a[j])
                 ^
             (        )
e160_280446.c:17:18: note: use '==' to turn this assignment into an equality comparison
     else if(a[k]=a[j])
                 ^
                 ==
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int a[50],i,j,k;/*declaration of variable*/
	i=0;
	for(i=0;i<1;i=i+1)/*looping begins*/
	{
	    scanf("%d\n",&(a[i]));/*input of first line*/
	j=1;
	for(j=1;j<a[i];j=j+1)
	{
	scanf("%d",&(a[j]));
	for(k=2;k>j;k=k+1)
     {
     if(a[i]=a[j])
     printf("YES");
     else if(a[k]=a[j])
	printf("YES");
	else
	printf("NO");
	}
	   }
	     }
	     return 0;
}