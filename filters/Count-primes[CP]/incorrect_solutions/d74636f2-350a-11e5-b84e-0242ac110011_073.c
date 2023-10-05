/*compile-errors:e158_278081.c:10:34: warning: variable 'count' is uninitialized when used here [-Wuninitialized]
            count = ((i%j)==0) + count;
                                 ^~~~~
e158_278081.c:9:22: note: initialize the variable 'count' to silence this warning
            int count;
                     ^
                      = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int main() {
    int a;//declaration of variable.
    scanf("%d",&a);//scan the input.
    int i;
    for(i=2; i<=(a-1); i++) {
        int j;
        for(j=2; j<=(a-1); j++) {
            int count;
            count = ((i%j)==0) + count;
            printf("%d",count);
        }
    }
    return 0;
}