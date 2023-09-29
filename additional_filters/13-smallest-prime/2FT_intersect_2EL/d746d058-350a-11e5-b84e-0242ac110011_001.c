/*compile-errors:e158_278367.c:4:9: warning: unused variable 'i' [-Wunused-variable]
    int i;
        ^
e158_278367.c:16:16: warning: incompatible integer to pointer conversion passing 'int' to parameter of type 'const char *' [-Wint-conversion]
        printf(1);
               ^
/usr/include/stdio.h:362:43: note: passing argument to parameter '__format' here
extern int printf (const char *__restrict __format, ...);
                                          ^
e158_278367.c:16:16: warning: format string is not a string literal (potentially insecure) [-Wformat-security]
        printf(1);
               ^
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
    int i;
    for(int i=2;i<num;i=i+1)
    { if(num%i==0)
      return 0;
    }
    return 1;
}

int main(){
    int i,N;
    scanf("%d",&N);
    if(N==1){
        printf(1);
    }
    else{
    for(i=N;;i++){
    if(check_prime(i)==1)
    { printf("%d",i);
    break;
        }
      }
    }
    return 0;
}