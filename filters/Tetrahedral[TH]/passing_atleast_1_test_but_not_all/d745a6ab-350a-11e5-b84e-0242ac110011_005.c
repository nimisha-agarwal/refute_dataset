/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
    int N,s,r,p=0;
    scanf("%d",&N);
    for(s=1;s<=N;s++){
        for(r=1;r<=s;r++){
            p=p+r;
        }
        printf("%d",p);
    }
	//Enter your code here
	return 0;
}