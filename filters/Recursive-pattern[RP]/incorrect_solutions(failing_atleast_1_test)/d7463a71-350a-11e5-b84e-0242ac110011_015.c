/*compile-errors:e175_306035.c:13:9: warning: unused variable 'i' [-Wunused-variable]
    int i;
        ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int a;
void positive_rec(int x){
    if(x>0){
        printf("%d ",x);
        positive_rec(x-5);
    }
    else if(x<=0){
        printf("%d",x);
    }
}
void negative_rec(int x){
    int i;
    if(x>0){
        negative_rec(x-5);
    }
    else if(x<=0){
        printf("%d",x);
        
    }
}
int main(){
    scanf("%d",&a);
    positive_rec(a);
    negative_rec(a);
	return 0;
}