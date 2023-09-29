/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

void array_value(int t[],int n){
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
        for(int j=0;j<n;j++){
            if((A[i]==A[j])&&(i!=j)){
                printf("YES");
                return 0;
            }
        }
    }
    printf("NO");
	return 0;
}