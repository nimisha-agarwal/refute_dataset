/*compile-errors:e158_278345.c:13:15: warning: unused variable 'count' [-Wunused-variable]
    int i=1,j,count;
              ^
e158_278345.c:18:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int N);
int main(){
    int N,h;
    scanf("%d",&N);
    h=check_prime(N);
    printf("%d",h);
    return 0;
}
int check_prime(int N)
{
    int i=1,j,count;
    for(i=1;i>=N;i++)
        for(j=1;j<=i-1;j++)
    
        return i;
}