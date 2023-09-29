/*compile-errors:e160_280538.c:4:15: warning: variable 'size' is uninitialized when used here [-Wuninitialized]
        int size,i,n[size],num1=0,num2=0;
                     ^~~~
e160_280538.c:4:10: note: initialize the variable 'size' to silence this warning
        int size,i,n[size],num1=0,num2=0;
                ^
                 = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int size,i,n[size],num1=0,num2=0;
	scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<size;i++)
    {
        num1=n[i];
        for(i=1;i<size;i++)
        {
            num2=n[i];
            if(num1==num2){
             printf("YES");
             break;}
            else 
             continue;
        }
    }
    printf("NO");

	return 0;
}