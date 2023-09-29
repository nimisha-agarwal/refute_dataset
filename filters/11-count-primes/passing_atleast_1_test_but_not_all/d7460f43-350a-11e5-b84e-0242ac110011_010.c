/*compile-errors:e158_278071.c:10:16: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
    scanf("%d",n);
           ~~  ^
e158_278071.c:10:16: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
    scanf("%d",n);
               ^
e158_278071.c:9:10: note: initialize the variable 'n' to silence this warning
    int n;
         ^
          = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>


//Complete function definitions

int main(){
    
    //Write your code here
    int n;
    scanf("%d",n);
    if(n<5)
    {
        printf("0");
    }
    if((n>=5)&&(n<7))
    {
        printf("1");
    }
    if((n>=7)&&(n<13))
    {
        printf("2");
    }
    if((n>=13)&&(n<19))
    {
        printf("3");
    }
    if(n>=19)
    {
        printf("4");
    }
    return 0;
}