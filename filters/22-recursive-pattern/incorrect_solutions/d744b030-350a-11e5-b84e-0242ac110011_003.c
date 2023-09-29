/*compile-errors:e175_305962.c:8:15: warning: equality comparison result unused [-Wunused-comparison]
if(num<=0)flag==1;
          ~~~~^~~
e175_305962.c:8:15: note: use '=' to turn this equality comparison into an assignment
if(num<=0)flag==1;
              ^~
              =
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int n,flag=0;
void set_values(int num){
    printf("%d",num);
    if (num==n) return;
    if (num>0&&flag==0){
num=num-5;}
if(num<=0)flag==1;
if(num>0&&flag==1)
num=num+5;
    set_values(num);
    
}
int main(){
    scanf("%d",&n);
     set_values(n);

	return 0;
}