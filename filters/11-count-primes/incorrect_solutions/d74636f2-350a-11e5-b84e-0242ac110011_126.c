/*compile-errors:*/
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
            int count=0;
            count = count + ((i%j)==0);
            printf("%d",count);
        }
    }
    return 0;
}