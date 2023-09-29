/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int a;
void positive_rec(int x){
    if((x==0)||(x<0)){return;}
    else if(x>0){
        printf("%d ",x);
        positive_rec(x-5);
    }
}
void negative_rec(int x){
    int i;
    if(x>0){
        negative_rec(x-5);
    }
    else if(x<=0){
        printf("%d",x);
        i=x;
    }
    if(i<=x){
        negative_rec(x+5);
        printf("%d",i);
    }
}
int main(){
    scanf("%d",&a);
    positive_rec(a);
    negative_rec(a);
	return 0;
}