/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
# include <stdio.h>
int n;
int k = n;
void patt1(int n) {
    if (n<=0) {
        patt2(n);
    }
    else {
        n=-5;
        printf("%d",n);
        patt1(n);
    }
}
void patt2(int n) {
    if (n==k) {
        return;
    } else {
        n=+5;
        printf("%d",n);
        patt2(n);
    }
}
int main () {
    scanf("%d",&n);
    patt1(n);
    return 0;
}