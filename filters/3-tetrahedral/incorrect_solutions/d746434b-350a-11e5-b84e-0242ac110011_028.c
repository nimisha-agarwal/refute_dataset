/*compile-errors:e158_277966.c:7:22: warning: for loop has empty body [-Wempty-body]
    for(k=1;k<=i;k++);    
                     ^
e158_277966.c:7:22: note: put the semicolon on a separate line to silence this warning
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
    int i,j,k,sum=0;
    scanf("%d",&j);
    for(i=1;i<=j;i++){
    for(k=1;k<=i;k++);    
        sum = sum + k;
    }
	printf("%d",sum);
	//Enter your code here
	return 0;
}