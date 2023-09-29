/*execute-result:TL*/
/*compile-errors:e158_277974.c:5:16: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
    scanf("%d",n);
           ~~  ^
e158_277974.c:6:20: warning: expression result unused [-Wunused-value]
    for (i=0;i<=n;i+1)
                  ~^~
e158_277974.c:5:16: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
    scanf("%d",n);
               ^
e158_277974.c:4:12: note: initialize the variable 'n' to silence this warning
    int j,n,i,sum=0,z=0;
           ^
            = 0
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
    int j,n,i,sum=0,z=0;
    scanf("%d",n);
    for (i=0;i<=n;i+1)
    {
        for (j=0;j<=i;j++)
        {
            z=z+j;
        }
        sum=sum+z;
}
    printf("%d",sum);
	return 0;
}