/*execute-result:OK*/
/*compile-errors:*/
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
            if(a[i]==a[j]){
             printf("YES");
             break; }
            if(a[i]!=a[j]){
                printf("NO");
                 }     
            }
   	         }
	return 0;
}