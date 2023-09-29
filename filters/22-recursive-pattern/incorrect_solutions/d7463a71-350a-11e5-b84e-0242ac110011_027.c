/*compile-errors:*/
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
    

int main(){
    
    scanf("%d",&a);
    positive_rec(a);
	return 0;
}