/*execute-result:OK*/
/*compile-errors:e160_280455.c:7:18: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
        for(j=1;j=i+1;j++){
                ~^~~~
e160_280455.c:7:18: note: place parentheses around the assignment to silence this warning
        for(j=1;j=i+1;j++){
                 ^
                (    )
e160_280455.c:7:18: note: use '==' to turn this assignment into an equality comparison
        for(j=1;j=i+1;j++){
                 ^
                 ==
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
int a[50],n,i,j;	// Fill this area with your code.
scanf("%d",&n);
for(i=0;i<n;i++){
        for(j=1;j=i+1;j++){
            if(a[i]==a[j]){
                printf("YES");
            }    
                else{
                    printf("NO");
                }
        }    
}
	return 0;
}