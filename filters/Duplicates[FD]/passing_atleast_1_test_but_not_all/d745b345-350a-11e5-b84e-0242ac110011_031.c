/*compile-errors:*/
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
for(k=0;k<j-1;k=k+1)
{
if( arr[k]==arr[j])printf("YES");
else printf("NO");
} j++;




}
	return 0;
}