/*compile-errors:e158_278345.c:14:9: warning: unused variable 'd' [-Wunused-variable]
    int d,i,j;
        ^
e158_278345.c:14:13: warning: unused variable 'j' [-Wunused-variable]
    int d,i,j;
            ^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int n);
int main(){
    
  int N,h;
  scanf("%d",&N);
  h=check_prime(N);
  printf("%d",h);
    
    return 0;
}
int check_prime(int n){
    int d,i,j;
    for(i=1;i++;){
        if((i%2!=0)&&(i>=n))
        printf("%d",i);
        break;
    }
    return i;
}