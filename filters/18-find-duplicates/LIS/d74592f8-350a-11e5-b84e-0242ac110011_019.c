/*execute-result:OK*/
/*compile-errors:e160_280474.c:19:23: warning: incompatible integer to pointer conversion passing 'int' to parameter of type 'int *'; take the address with & [-Wint-conversion]
       if(equal_check(a[100],n)==0){printf("NO\n");}
                      ^~~~~~
                      &
e160_280474.c:3:21: note: passing argument to parameter 'b' here
int equal_check(int b[],int n){
                    ^
e160_280474.c:19:23: warning: array index 100 is past the end of the array (which contains 100 elements) [-Warray-bounds]
       if(equal_check(a[100],n)==0){printf("NO\n");}
                      ^ ~~~
e160_280474.c:13:5: note: array 'a' declared here
    int a[100];
    ^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int equal_check(int b[],int n){
    int i,j;
    return 0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(b[i]==b[j]){return 1;break;}
        }
    }
}
int main() {
    int a[100];
    int n,i;
    scanf("%d\n",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i-1]);
        }
       if(equal_check(a[100],n)==0){printf("NO\n");}
       else {printf("YES\n");}
       
    
	
	return 0;
}