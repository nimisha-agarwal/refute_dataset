/*compile-errors:e160_280522.c:4:15: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
    for(i=0;i<n;i++){
              ^
e160_280522.c:3:14: note: initialize the variable 'n' to silence this warning
    int i,j,n;
             ^
              = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int check(int a[]){
    int i,j,n;
    for(i=0;i<n;i++){
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