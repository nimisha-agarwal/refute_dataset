/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
    int x,i,j,t;
    t=0;//initialising from 0
    scanf("%d",&x);
    for (i=1;i<=x;i++){
            for(j=1;j<=i;j++)//taking values of j from 1 to i
            {
                t=t+j;//getting the sum
            }
    }
    printf("%d",t);
	return 0;
}