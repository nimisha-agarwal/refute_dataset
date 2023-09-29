/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
#include<math.h>
int check_prime(int num){
int i;
{
for(i=2;i<=num;i=i+1){
    if(num%i==0){
        return 0;
    }
}
}
return 1;
}
int main(){
int N;
scanf("%d",&N);
while(!check_prime(N)){
    N=N+1;
}
printf("%d",N);
    
    return 0;
}