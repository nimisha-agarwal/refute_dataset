/*compile-errors:e158_278345.c:11:21: warning: unused parameter 'N' [-Wunused-parameter]
int check_prime(int N)
                    ^
1 warning generated.*/
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
    int i=1,j,count=0;
    for(i=1;i++;){
        for(j=1;j<=i-1;j++){
            count=count+1;
        }
        if((count==i-1)&&(i%j!=0))
        printf("%d",i);
    }
    return i;
}