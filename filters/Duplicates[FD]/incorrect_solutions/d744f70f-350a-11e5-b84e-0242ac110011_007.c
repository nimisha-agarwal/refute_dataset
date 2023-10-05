/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int arr[50];
	int n;
	int count=0;
	int in;
	scanf("%d",&n);
	while(count<n){
	    scanf("%d",&in);
	    arr[count]=in;
	    count=count+1;
	}
	int i; int j;
	for(i=0;i<n;i++){
	    for(j=0;j<n;j++){
	        if(j==i){
	            continue;
	        }
	        else{
	            if(arr[i]==arr[j]){
	                printf("YES");
	                break;
	            }
	        }
	    }
	}
	return 0;
}