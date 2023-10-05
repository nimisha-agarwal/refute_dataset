/*compile-errors:*/
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
    for(i=1;i>=N;i++){
        for(j=1;j<=i-1;j++){
            count=0;
            if(i%j!=0){
                count=count+1;
            }
        }
    }
        return i;
}