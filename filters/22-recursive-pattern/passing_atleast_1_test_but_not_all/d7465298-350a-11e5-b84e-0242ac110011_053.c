/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void func(int n,int n2,int n3)
{  if(n<=0)
   { printf("%d ",n);
   
     func(n+5,0,n3);
   }
  
  else if(n>0&&n2>0)
  { printf("%d ",n);
  
    func(n-5,n2,n3);
  }
  
 else if(n2==0)
 {    
     if(n==n3)
     printf("%d",n);
     return;
     
     printf("%d ",n);
     func(n+5,0,n3);
     
 }
 
 
}

int main(){
int num;
scanf("%d",&num);
int num2=num;
int num3=num;
func(num,num2,num3);    
return 0;
}