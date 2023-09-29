/*compile-errors:e175_306031.c:6:12: warning: incompatible integer to pointer conversion passing 'int' to parameter of type 'const char *' [-Wint-conversion]
    printf(n);
           ^
/usr/include/stdio.h:362:43: note: passing argument to parameter '__format' here
extern int printf (const char *__restrict __format, ...);
                                          ^
e175_306031.c:6:12: warning: format string is not a string literal (potentially insecure) [-Wformat-security]
    printf(n);
           ^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void loop(int n)
{
    if(n<=0)
    return;
    printf(n);
    n=n-5;
    loop(n);
}
int main(){
    int n;
    scanf("%d",&n);
    loop(n);
	return 0;
}