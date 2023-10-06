/*compile-errors:e175_306021.c:6:16: warning: more '%' conversions than data arguments [-Wformat]
    printf("%d%d%d",call(n));
              ~^
e175_306021.c:11:9: warning: expression result unused [-Wunused-value]
 return n, n-5,n;}
        ^
e175_306021.c:11:13: warning: expression result unused [-Wunused-value]
 return n, n-5,n;}
           ~^~
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int call(int n);
int main(){
    int n;
    scanf("%d",&n);
    printf("%d%d%d",call(n));
	return 0;
}
int call(int n)
{ 
 return n, n-5,n;}