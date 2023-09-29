/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
# include <stdio.h>
void patt_1(int);
void patt_2(int);
int n;
int k;
void patt_1(int n) {
    if (n<=0) {
        patt_2(n);
    }
    else {
        n=-5;
        printf("%d",n);
        patt_1(n);
    }
}
void patt_2(int n) {
    if (n==k) {
        return;
    } else {
        n=+5;
        printf("%d",n);
        patt_2(n);
    }
}
int main () {
    scanf("%d",&n);
     k = n;
    patt_1(n);
    return 0;
}