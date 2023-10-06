/*compile-errors:e158_278367.c:5:26: warning: multiple unsequenced modifications to 'i' [-Wunsequenced]
    for(int i=2;i<num;i=i++);
                       ~ ^
e158_278367.c:5:29: warning: for loop has empty body [-Wempty-body]
    for(int i=2;i<num;i=i++);
                            ^
e158_278367.c:5:29: note: put the semicolon on a separate line to silence this warning
e158_278367.c:6:14: warning: variable 'i' is uninitialized when used here [-Wuninitialized]
    { if(num%i==0)
             ^
e158_278367.c:4:10: note: initialize the variable 'i' to silence this warning
    int i;
         ^
          = 0
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
    int i;
    for(int i=2;i<num;i=i++);
    { if(num%i==0)
      return 0;
    }
    return 1;
}

int main(){
    int i,N;
    scanf("%d",&N);
    if(check_prime(N)==1)
    { printf("%d",N);
    }
    else{
    for(i=N+1;check_prime(i)==1;i++)
    {
    }
    printf("%d",i);
    }
    return 0;
}