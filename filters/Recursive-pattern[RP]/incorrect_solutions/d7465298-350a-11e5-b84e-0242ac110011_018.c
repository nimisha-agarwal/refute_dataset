/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void func(int n,int num)
{  if(n<=0)
   { printf("%d ",n);
     func(n+5,num);
   }
  
  if(n>0&&n!=num)
  { printf("%d ",n);
    func(n-5,num);
  }
  
  if(n==num)
  return;
}

int main(){
int num;
scanf("%d",&num);
func(num,num);    
return 0;
}