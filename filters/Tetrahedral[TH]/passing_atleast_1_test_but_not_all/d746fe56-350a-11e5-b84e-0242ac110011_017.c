/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
    int x,i,j,t;
    scanf("%d",&x);
    for (i=1;i<=x;i++){
            for(j=1;j<=i;j++){
                t=i+j;
            }
    }
    printf("%d",t);
	return 0;
}