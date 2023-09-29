/*execute-result:RT*/
/*compile-errors:e158_278299.c:19:16: warning: incompatible integer to pointer conversion passing 'int' to parameter of type 'const char *' [-Wint-conversion]
        printf(check_prime(N));
               ^~~~~~~~~~~~~~
/usr/include/stdio.h:362:43: note: passing argument to parameter '__format' here
extern int printf (const char *__restrict __format, ...);
                                          ^
e158_278299.c:19:16: warning: format string is not a string literal (potentially insecure) [-Wformat-security]
        printf(check_prime(N));
               ^~~~~~~~~~~~~~
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int a)
{
    int b=a-1;
    while (b>1)
    {
        if(a%b==0)
           return 0;
        
    b=b-1;      
    }
    return 1;
}

    int main () {
        int N;
        scanf("%d",&N);
        printf(check_prime(N));
        /*
        int y;
        for(y=N;N>0;N++)
        {
            if(check_prime(y)==1)
            {
                printf("%d",y);
                break;
            }
        }*/
        return 0;
    }
    
