/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void func(int n)
{ 
  if(n<=0)
   return;
   
  printf("%d",n);
  
  func(n-5);

}

int main(){
int num;
scanf("%d",&num);
func(num);    
return 0;
}