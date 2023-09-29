/*execute-result:TL*/
/*compile-errors:e160_280487.c:10:10: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
for(k=0;k=j-1;k=k+1)
        ~^~~~
e160_280487.c:10:10: note: place parentheses around the assignment to silence this warning
for(k=0;k=j-1;k=k+1)
         ^
        (    )
e160_280487.c:10:10: note: use '==' to turn this assignment into an equality comparison
for(k=0;k=j-1;k=k+1)
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
for(k=0;k=j-1;k=k+1)
{
if( k==arr[j])printf("YES");
else printf("NO");
} j++;




}
	return 0;
}