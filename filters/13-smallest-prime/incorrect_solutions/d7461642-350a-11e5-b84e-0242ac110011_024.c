/*compile-errors:e158_278336.c:4:24: warning: unused parameter 'N' [-Wunused-parameter]
int smallest_prime(int N)
                       ^
e158_278336.c:9:1: warning: control reaches end of non-void function [-Wreturn-type]
}
^
e158_278336.c:7:9: warning: variable 'p' is uninitialized when used here [-Wuninitialized]
    if (p%i!=0){printf("p");}
        ^
e158_278336.c:6:10: note: initialize the variable 'p' to silence this warning
    int p,i;
         ^
          = 0
e158_278336.c:7:11: warning: variable 'i' is uninitialized when used here [-Wuninitialized]
    if (p%i!=0){printf("p");}
          ^
e158_278336.c:6:12: note: initialize the variable 'i' to silence this warning
    int p,i;
           ^
            = 0
4 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);
int smallest_prime(int N)
{
    int p,i;
    if (p%i!=0){printf("p");}
    else printf("p+1");
}

//Complete function definitions

int main(){
    
    //Write your code here
    
    return 0;
}