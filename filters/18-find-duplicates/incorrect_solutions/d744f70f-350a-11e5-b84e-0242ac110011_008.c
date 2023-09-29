/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int arr[50]; int n; //defining array
	int count=0; int in; //defining variables for taking inputs
	int flag=0; //to keep a count of prints
	scanf("%d",&n); //inputting number of ints
	while(count<n){
	    scanf("%d",&in);
	    arr[count]=in;
	    count=count+1; //storing ints
	}
	int i; int j;
	for(i=0;i<n;i++){
	    for(j=0;j<n;j++){ //comparing each int to all ints
	        if(j==i){
	            continue;
	        }
	        else{
	            if(arr[i]==arr[j]){
	                printf("YES"); //output
	                flag=flag+1;
	                break;
	            }
	        }
	    }
	    if(flag==1){break;}
	}
	if(flag==0){
	    printf("NO"); //output
	}
	return 0;
}