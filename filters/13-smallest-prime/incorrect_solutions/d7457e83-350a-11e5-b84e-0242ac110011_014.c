/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int check_prime(int num);
int check_prime(int num){
    int i;
    for(i=2;i<=num-1;i++){
        if(num%i == 0){
            return 0;
        } }
        return 1;
}
int main(){
int num,i;
scanf("%d",&num);
for(i=num;i>=num;i++){
    if(check_prime(i)){
        break;
    }else {
        continue;
    } 
    }
printf("%d",i);
return 0;
}  

