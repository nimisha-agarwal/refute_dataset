/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int n,flag=0;
void set_values(int num,int* check){
    printf("%d",num);
    if (num==n) return;
    if (num>0&&(*check)==0){
  num=num-5;      
set_values(num);
    }
if(num<=0) *check=1;
if(*check==1)
num=num+5;
    set_values(num);
    
}
int main(){
    scanf("%d",&n);
    printf("%d",n);
     set_values((n-5),&flag);

	return 0;
}