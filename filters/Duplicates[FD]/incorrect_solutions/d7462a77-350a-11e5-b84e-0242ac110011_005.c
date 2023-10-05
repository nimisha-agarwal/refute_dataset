/*execute-result:OK*/
/*compile-errors:e160_280502.c:10:20: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
            if(a[i]=a[j]){
               ~~~~^~~~~
e160_280502.c:10:20: note: place parentheses around the assignment to silence this warning
            if(a[i]=a[j]){
                   ^
               (        )
e160_280502.c:10:20: note: use '==' to turn this assignment into an equality comparison
            if(a[i]=a[j]){
                   ^
                   ==
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int i,j,N;
    scanf("%d" ,&N);
	int a[50];
   	for(i=0;N>i;i=i+1){
        scanf("%d",&a[i]);
            for(j=1;i>j;j++){
            if(a[i]=a[j]){
             printf("YES");
             break; }
             if(a[i]!=a[j]){
               printf("NO");
                 }
            }   
        }
	return 0;
}