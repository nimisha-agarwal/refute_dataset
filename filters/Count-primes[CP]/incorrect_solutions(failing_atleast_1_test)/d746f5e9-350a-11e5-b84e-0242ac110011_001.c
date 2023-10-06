/*execute-result:OK*/
/*compile-errors:e158_278112.c:22:21: warning: if statement has empty body [-Wempty-body]
    if(p1==1&&p2==1);
                    ^
e158_278112.c:22:21: note: put the semicolon on a separate line to silence this warning
e158_278112.c:23:20: warning: unknown escape sequence '\)'
    printf("\(%d,%d\)",p1,p2);
                   ^~
e158_278112.c:22:15: warning: variable 'p2' is uninitialized when used here [-Wuninitialized]
    if(p1==1&&p2==1);
              ^~
e158_278112.c:16:14: note: initialize the variable 'p2' to silence this warning
    int p1,p2;
             ^
              = 0
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{ 
    int i;
    for (i=2;i<num;i++)
    {if (num%i==0)
    return 0;
    }
    return 1;
}    

int main(){
    int N;
    int i;
    int p1,p2;
    scanf("%d",&N);
    for(i=3;i<=N-1;i++) {
    p1=check_prime(i);
    p1=check_prime(i+2);
    
    if(p1==1&&p2==1);
    printf("\(%d,%d\)",p1,p2);
    }
    return 0;
}