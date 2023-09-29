/*execute-result:OK*/
/*compile-errors:e158_277902.c:9:17: warning: format specifies type 'long *' but the argument has type 'long long *' [-Wformat]
    scanf("%ld",&n);
           ~~~  ^~
           %lld
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
#define ll long long



int main(){
    ll n;
   ll ans;
    scanf("%ld",&n);
 ans=(n-1)*n*(n+1)/6;
    printf("%lld\n",ans);
	return 0;
}