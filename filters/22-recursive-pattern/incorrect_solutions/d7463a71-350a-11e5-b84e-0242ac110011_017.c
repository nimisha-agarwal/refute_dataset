/*compile-errors:e175_306035.c:14:16: warning: format specifies type 'int *' but the argument has type 'const int *' [-Wformat]
    scanf("%d",&a);
           ~~  ^~
           %d
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
const int a;
void rec(int x){
    if(x==0){return;}
    int n;
    n=x;
    printf("%d",n);
    rec(x-5);
    if(n>a){return;}
}

int main(){
    
    scanf("%d",&a);
    rec(a);
	return 0;
}