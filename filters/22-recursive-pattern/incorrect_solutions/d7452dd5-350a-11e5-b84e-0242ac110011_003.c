/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

void recursiveprintf(int n,int i){
    if(i==0){
        printf("%d\n",n-5*i);
        return;
    }
    printf("%d\n",n-5*i);
    i--;
    recursiveprintf(n,i);
}
void recursiveprintb(int n,int i){
    if(i==3){
        printf("%d\n",n-5*i);
        i--;
        recursiveprintf(n,i);
        return;
    }
    printf("%d\n",n-5*i);
    i++;
    recursiveprintb(n,i);
}

int main(){
    //input
    int n;
    scanf("%d",&n);
    
    
    //function call
    recursiveprintb(n,0);
	return 0;
}