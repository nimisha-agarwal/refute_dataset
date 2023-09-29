/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int n,flag=0;
int *check;
check=&flag;
void set_values(int num){
    printf("%d",num);
    if (num==n) return;
    if (num>0&&(*check)==0)
set_values(num);{
num=num-5;
        
    }
if(num<=0) *check=1;
if(*check==1)
num=num+5;
    set_values(num);
    
}
int main(){
    scanf("%d",&n);
    printf("%d",n);
     set_values((n-5));

	return 0;
}