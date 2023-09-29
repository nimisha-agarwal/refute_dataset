/*compile-errors:e158_277960.c:25:9: warning: incompatible integer to pointer conversion passing 'int' to parameter of type 'const char *' [-Wint-conversion]
        printf(func(N));
               ^~~~~~~
/usr/include/stdio.h:362:43: note: passing argument to parameter '__format' here
extern int printf (const char *__restrict __format, ...);
                                          ^
e158_277960.c:25:9: warning: format string is not a string literal (potentially insecure) [-Wformat-security]
        printf(func(N));
               ^~~~~~~
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int n_sum(int);
int func(int);


int func(int n){
    int i,tetrahedral_sum=0;
    for(i=1;i<=n;i++) {tetrahedral_sum+=n_sum(i);}
    //loop to compute tetrahedral sum using 
    //function n_sum
    return tetrahedral_sum;
}

int n_sum(int n){
    int i,sum=0;
    for(i=1;i<=n;i++) {sum+=i;}
    //loop to compute sum from 1 to n
    return sum;
}

int main(){
	int N;
	scanf("%d",&N);
	printf(func(N));
	return 0;
}