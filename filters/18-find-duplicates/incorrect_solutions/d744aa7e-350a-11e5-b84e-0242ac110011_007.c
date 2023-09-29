/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

void array_value(int t[],int n){//to initialise the array
    for(int i=0;i<n;i++){
        scanf("%d",&t[i]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int A[n];
    array_value(A,n);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(A[i]==A[j]){
                printf("YES\n");//incase duplication found
                return 0;//terminates the program
            }
        }
    }
    printf("NO\n");//no dupliates entries are found
	return 0;
}