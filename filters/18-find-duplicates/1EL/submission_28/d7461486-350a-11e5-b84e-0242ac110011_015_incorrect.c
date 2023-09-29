/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int n,i;
	int flag = 0;
	scanf("%d",&n);
	int a[50];
	for(i=0;i<n;i++)
	    scanf("%d ",&a[i]);
    for(i=0;i<n;i++){
        int j;
        for(j=0;j<n;j++){
            if(a[i]==a[j])
            flag = 1;
        }
    }    
	if(flag==1)
	printf("YES\n");
	else
	printf("NO\n");
	return 0;
}