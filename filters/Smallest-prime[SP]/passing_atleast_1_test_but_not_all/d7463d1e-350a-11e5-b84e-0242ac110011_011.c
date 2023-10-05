/*compile-errors:e158_278345.c:14:9: warning: unused variable 'x' [-Wunused-variable]
    int x,d,i,j;
        ^
e158_278345.c:14:11: warning: unused variable 'd' [-Wunused-variable]
    int x,d,i,j;
          ^
e158_278345.c:14:15: warning: unused variable 'j' [-Wunused-variable]
    int x,d,i,j;
              ^
3 warnings generated.*/
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
    int x,d,i,j;
    for(i=1;i++;){
        if((i%2!=0)&&(i>=n))
        printf("%d",i);
        break;
    }
    return i;
}