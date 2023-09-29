/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int check_prime(int n);

int main(){
    int i,n,num;
    scanf("%d",&n);
    num=0;
    for(i=0;i<=n;i=i+2){
      num=num+1;  
    }
    printf("%d",num);
    return 0;
}