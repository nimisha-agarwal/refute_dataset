/*compile-errors:sh: 1: exec: clang: not found*/
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
        printf("%d ",x);
        printf("%d",a);    
        while(x<=a){
            printf("%d",x+5);
        }
    }
}

        
    

int main(){
    scanf("%d",&a);
    positive_rec(a);
    return 0;
}