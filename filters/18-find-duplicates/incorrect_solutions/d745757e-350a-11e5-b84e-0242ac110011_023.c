/*execute-result:OK*/
/*compile-errors:e160_280467.c:19:21: warning: multiple unsequenced modifications to 'count' [-Wunsequenced]
                count=count++;
                     ~     ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int main() {
    int b,i,j,k,count=0;
    scanf("%d\n",&b);
    int a[b];
    for(i=0;i<b;i++)
    {
        scanf("%d ",&a[i]);
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
	        count=count++;
	    }
	}
	printf("%d",count);
	if(count==b-1)
	{
	    printf("NO");
	}
	return 0;
}