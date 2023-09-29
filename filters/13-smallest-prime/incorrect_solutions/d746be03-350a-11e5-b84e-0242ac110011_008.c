/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
#include<math.h>
int check_prime(int num){
int i;
{
for(i=2;i<=sqrt(num);i=i+1){
    if(num%i==0){
        return 0;
    }
}
}
return 1;
}
int main(){
int N=2;
scanf("%d",&N);
if(N==1){
    printf("%d",N=N+1);
while(!check_prime(N)){
    N=N+1;
}
printf("%d",N);
}
    return 0;
}