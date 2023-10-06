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
int num,i,count=0;
scanf("%d",&num);
for(i=num;i>=num;i++){
    if(check_prime(i)){
        count++;
    }
}
printf("%d",count);
return 0;
}
    
    //Write your code here
    

