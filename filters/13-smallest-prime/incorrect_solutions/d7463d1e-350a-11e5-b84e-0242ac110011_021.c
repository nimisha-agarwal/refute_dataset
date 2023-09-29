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
int check_prime(int N){
    int i;
    for(i=1;i++;){
        if((i%2!=0)&&(i>=N))
        printf("%d",i);
        break;
    }
    return i;
}