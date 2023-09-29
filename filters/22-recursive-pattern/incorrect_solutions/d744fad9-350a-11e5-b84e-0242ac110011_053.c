/*execute-result:ML*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int i=0,cnt=0,m=0;
void func(int a){
   
    if(a>0){
    printf("%d",a);
    if(m==0){
    cnt++;
   func(a-5);}}
   else{
       printf("%d",a);
       while(i<=cnt){
       func(a+5);
       m++;
       i++;
      }
}
}

int main(){
    int n;
    scanf("%d",&n);
    func(n);
	return 0;
}