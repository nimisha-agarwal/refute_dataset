/*compile-errors:e175_306055.c:7:16: warning: incompatible integer to pointer conversion passing 'int' to parameter of type 'const char *' [-Wint-conversion]
        printf(n); n+=5;
               ^
/usr/include/stdio.h:362:43: note: passing argument to parameter '__format' here
extern int printf (const char *__restrict __format, ...);
                                          ^
e175_306055.c:7:16: warning: format string is not a string literal (potentially insecure) [-Wformat-security]
        printf(n); n+=5;
               ^
e175_306055.c:8:9: warning: implicit declaration of function 'pattern2' is invalid in C99 [-Wimplicit-function-declaration]
        pattern2(n,k);
        ^
e175_306055.c:19:16: warning: incompatible integer to pointer conversion passing 'int' to parameter of type 'const char *' [-Wint-conversion]
        printf(n);
               ^
/usr/include/stdio.h:362:43: note: passing argument to parameter '__format' here
extern int printf (const char *__restrict __format, ...);
                                          ^
e175_306055.c:19:16: warning: format string is not a string literal (potentially insecure) [-Wformat-security]
        printf(n);
               ^
e175_306055.c:25:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
6 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

void pattern(int n,int k)
{
    if(n<=0)     
    {
        printf(n); n+=5;
        pattern2(n,k);
    }
    else
    printf("%d ",n);
    pattern(n-5,k);
}

int pattern2(int n,int k)
{
    if(n<=k)
    {
        printf(n);
        pattern2(n+5,k);
    }
    
    else
    return 0;
}

int main()
{
    int n,k;
    scanf("%d",&n);
    k=n;
    pattern(n,k);
	return 0;
}