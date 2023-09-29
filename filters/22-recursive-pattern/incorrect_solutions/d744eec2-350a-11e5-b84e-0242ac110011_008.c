/*compile-errors:e175_305975.c:11:28: warning: format specifies type 'int' but the argument has type 'int *' [-Wformat]
    if(n<=0) {printf("%d ",&n);return revprint(N);}
                      ~~   ^~
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int N;
void revprint(int n){
    if(n==N) printf("%d ",n);
    else {
        printf("%d ",n);
        revprint(n+5);
    }
}
void print(int n){
    if(n<=0) {printf("%d ",&n);return revprint(N);}
    else {
    printf("%d ",n);
    print(n-5);
}
        
    }
int main(){
    scanf("%d",&N);
    print(N);
	return 0;
}