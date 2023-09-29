/*execute-result:RT*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
int i;
for(i=0;i<num;i++){
    if(num%i==0)
    return 0;
}
return 1;
}
int main(){
    int i,num,a=0; //Write your code here
    scanf("%d",&num);
    for(i=2;i<num;i++){
        if(check_prime(i)==1&&check_prime(i+2)==1){
            a=a+1;
        }
        printf("%d",a);
    }
    
    return 0;
}