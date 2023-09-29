/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int n,i;
	int flag = 0;
	scanf("%d",&n);
	int a[50];
	for(i=0;i<n;i++){
	    scanf("%d ",&a[i]);
	    if(a[i]==n){
	        flag=1;
	        a[i]=-10;
	    }
	}   
	if(flag != 1){
	    int j;
	    for(j=0;j<n;j++){
	        if(a[j]%n==0)
	        flag=1;
	        a[j]=a[j]/10;
	    }
	}
		if(flag != 1){
	    int k;
	    for(k=0;k<n;k++){
	        if(a[k]%n==0)
	        flag=1;
	    }
	}
	if(flag==1)
	printf("YES\n");
	else
	printf("NO\n");
	return 0;
}