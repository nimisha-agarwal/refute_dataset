/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {/*Program to check for duplicate elements*/
	int n,i;
	int flag = 0;           //gives 1 if there is duplicate element
	scanf("%d",&n);
	int a[50];
	for(i=0;i<n;i++)        //intializing array
	    scanf("%d ",&a[i]);
    for(i=0;i<n;i++){             //checking for duplicate element
        int j;
        for(j=0;j<n;j++){
            if(a[i]==a[j]&& i!=j)
            flag = 1;
        }
    }    
	if(flag==1)
	printf("YES\n");
	else
	printf("NO\n");
	return 0;
}