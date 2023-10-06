/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int arr[9];
void set_values(int num,int i){
    if (i>4) return;
    arr[i]=arr[9-(i+1)]=num;
    set_values(num-5,i+1);
    
}
int main(){
    int n,j;
    scanf("%d",&n);
     set_values(n,0);
     for(j=0;j<9;j++)
     printf("%d",arr[j]);
	return 0;
}