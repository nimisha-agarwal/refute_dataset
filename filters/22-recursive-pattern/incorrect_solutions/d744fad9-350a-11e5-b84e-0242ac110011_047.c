/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int i=0,cnt=0,arr[100];
void func(int a){
    arr[cnt]=a;
    if(a>0){
    printf("%d",a);
    cnt++;
   func(a-5);}
   else{
       printf("%d",a);
       for(i=cnt;i>0;i--){
      printf("%d",arr[i]);
       }
   }
   }
    

int main(){
    int n;
    scanf("%d",&n);
    func(n);
	return 0;
}