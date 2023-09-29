/*compile-errors:e158_277966.c:8:22: warning: for loop has empty body [-Wempty-body]
    for(k=1;k<=i;k++);    
                     ^
e158_277966.c:8:22: note: put the semicolon on a separate line to silence this warning
e158_277966.c:10:10: warning: variable 'SUM' is uninitialized when used here [-Wuninitialized]
    }SUM=SUM + sum;
         ^~~
e158_277966.c:4:22: note: initialize the variable 'SUM' to silence this warning
    int i,j,k,sum,SUM;
                     ^
                      = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
    int i,j,k,sum,SUM;
    scanf("%d",&j);
    for(i=1;i<=j;i++){
        sum = 0;
    for(k=1;k<=i;k++);    
        sum = sum + k;
    }SUM=SUM + sum;
	printf("%d",SUM);
	//Enter your code here
	return 0;
}