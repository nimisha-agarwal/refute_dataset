/*compile-errors:e158_278347.c:5:15: warning: expression result unused [-Wunused-value]
for(i=2;i<num;i){
              ^
e158_278347.c:9:5: warning: control may reach end of non-void function [-Wreturn-type]
    }
    ^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
    int i;
for(i=2;i<num;i){
    if(num%i!=0) return num;
    else num++;
}
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