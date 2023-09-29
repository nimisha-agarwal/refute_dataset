/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int n,flag=0;
void set_values(int num){
    printf("%d",num);
    if (num==n) return;
    if (num>0&&flag==0){
num=num-5;}
if(num<=0)flag=1;
if(num>0&&flag==1)
num=num+5;
    set_values(num);
    
}
int main(){
    scanf("%d",&n);
    printf("%d",n);
     set_values((n-5));

	return 0;
}