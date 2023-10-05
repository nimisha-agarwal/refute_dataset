/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int check(int a[],int n){
    int i,j,b=n;
    for(i=0;i<b;i++){
        for(j=0;j<i;j++){
            if(a[i]==a[j]){
                return 0;
            }
            
        }
    }
    return 1;
}

    



   


int main() {
	int n,i;
	scanf("%d/n",&n);
	int a[n];
	for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
	
	return 0;
}