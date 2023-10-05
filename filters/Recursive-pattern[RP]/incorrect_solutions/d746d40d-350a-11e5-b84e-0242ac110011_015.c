/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int n;

void print_pattern(int);
void restofpattern(int);

int main(){
    int n;
    scanf("%d",&n);
    printf("%d ",n);
    print_pattern(n);
	return 0;
}

void restofpattern(int m){
    if(m<=n){
        printf("%d",m+5);
        return restofpattern(m+5);
    }
    else return;
}

void print_pattern(int m){
    if(m>0){
        printf("%d ",m-5);
        return print_pattern(m-5);
    }
    if(m<=0)
        return restofpattern(m);
}

