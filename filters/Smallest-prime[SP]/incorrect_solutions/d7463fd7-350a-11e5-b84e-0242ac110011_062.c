/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
    int i;
for(i=num-1;i>1;i--){
    if(num%i!=0);
    else num++;i=num-1;
}return num;
    }
//Complete function definitions

int main(){
int N,p;
scanf("%d",&N);
p = check_prime(N);
printf("%d",p);
    //Write your code here
    
    return 0;
}