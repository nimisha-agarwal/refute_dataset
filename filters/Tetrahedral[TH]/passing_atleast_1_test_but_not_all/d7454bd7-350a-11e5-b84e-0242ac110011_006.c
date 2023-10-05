/*execute-result:OK*/
/*compile-errors:e158_277912.c:10:16: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
    scanf("%d",N);
           ~~  ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

    int i=1;
    int N;
    int T;
    
   
    int main(){
    
    scanf("%d",N);
    
    for (i=1;i<=N;i=i+1)
    {
        T=i;
        printf("%d",T);
    }
    
    
    return 0;
}