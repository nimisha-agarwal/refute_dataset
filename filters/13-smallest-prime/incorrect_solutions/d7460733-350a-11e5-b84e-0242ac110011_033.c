/*compile-errors:e158_278329.c:11:9: warning: division by zero is undefined [-Wdivision-by-zero]
    if(i/=0)
        ^ ~
e158_278329.c:10:16: warning: variable 'N' is uninitialized when used here [-Wuninitialized]
    for(i=1;i>=N;i=i+1)
               ^
e158_278329.c:8:10: note: initialize the variable 'N' to silence this warning
    int N;
         ^
          = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);

//Complete function definitions

int main(){
    int N;
    int i=1;
    for(i=1;i>=N;i=i+1)
    if(i/=0)
    printf("%d",i);
    
    //Write your code here
    
    return 0;
}