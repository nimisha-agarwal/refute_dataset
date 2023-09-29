/*execute-result:OK*/
/*compile-errors:e160_280487.c:12:10: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
if(arr[j]=arr[k])printf("YES");
   ~~~~~~^~~~~~~
e160_280487.c:12:10: note: place parentheses around the assignment to silence this warning
if(arr[j]=arr[k])printf("YES");
         ^
   (            )
e160_280487.c:12:10: note: use '==' to turn this assignment into an equality comparison
if(arr[j]=arr[k])printf("YES");
         ^
         ==
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
int i,j,k;
int arr[50];
scanf(" %d/n", &i);
for(j=0;j<i;j=j+1)
{
    scanf("%d",&arr[j]);
for(k=0;k<=j-1;k=k+1)
{
if(arr[j]=arr[k])printf("YES");
else printf("NO");
} j++;




}
	return 0;
}