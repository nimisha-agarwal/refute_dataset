/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
    int x,i,j,s,t;
    s=0;
    t=0;
    scanf("%d",&x);
    for (i=1;i<=x;i++){
        s=s+i;
            for(j=1;j<=i;j++){
                t=t+j;
            }
    }
    printf("%d",s+t);
	return 0;
}