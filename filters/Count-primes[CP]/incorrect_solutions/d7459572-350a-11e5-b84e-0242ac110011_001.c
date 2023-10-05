/*compile-errors:e158_278051.c:5:23: warning: unused variable 'a' [-Wunused-variable]
    int p1,num,p2,N,i,a;
                      ^
e158_278051.c:12:21: warning: variable 'p1' is uninitialized when used here [-Wuninitialized]
    printf("{%d%d}",p1,p2);
                    ^~
e158_278051.c:5:11: note: initialize the variable 'p1' to silence this warning
    int p1,num,p2,N,i,a;
          ^
           = 0
e158_278051.c:12:24: warning: variable 'p2' is uninitialized when used here [-Wuninitialized]
    printf("{%d%d}",p1,p2);
                       ^~
e158_278051.c:5:18: note: initialize the variable 'p2' to silence this warning
    int p1,num,p2,N,i,a;
                 ^
                  = 0
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
#include<math.h>
int check_prime(int num);
int main(){
    int p1,num,p2,N,i,a;
    scanf("%d%d",&N,&num);
    if(num==2){
        printf("2 is prime");
    }
   else{
    for(i=2;i<=N;i=i+2){
    printf("{%d%d}",p1,p2);
    }
   }
     return 0;
}