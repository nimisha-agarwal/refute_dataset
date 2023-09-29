/*compile-errors:e160_280522.c:29:11: warning: incompatible integer to pointer conversion passing 'int' to parameter of type 'int *'; take the address with & [-Wint-conversion]
    check(a[n],n);
          ^~~~
          &
e160_280522.c:2:15: note: passing argument to parameter 'a' here
int check(int a[],int n){
              ^
1 warning generated.*/
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
    check(a[n],n);
    
	
	return 0;
}