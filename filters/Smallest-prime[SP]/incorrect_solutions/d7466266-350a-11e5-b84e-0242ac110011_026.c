/*execute-result:TL*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
#include<math.h>
int check_prime(int x){
    int i;
    for(i=2;i<=x-1;i++){
        if(x%i==0)break;
        
    }
    if(i==x-1)return 1;
    else return 0;
}
int smallest_prime(int n){
    int a=0;
    int b=n;
    while(a==0){
        a=check_prime(b);
        if(a==0)b=b+1;
        else break;
    }
    return b;
}

//Complete function d

int main(){
    int N;
    scanf("%d",&N);
    printf("%d",smallest_prime(N));
    
    
    return 0;
}