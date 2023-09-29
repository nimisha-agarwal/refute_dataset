/*execute-result:OK*/
/*compile-errors:*/
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
    int i;
    for(i=1;i++;){
        if((i%2!=0)&&(i>=n))
        printf("%d",i);
        break;
    }
    return i;
}