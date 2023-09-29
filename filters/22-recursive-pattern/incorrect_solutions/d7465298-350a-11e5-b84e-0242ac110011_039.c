/*compile-errors:e175_306041.c:2:24: warning: type specifier missing, defaults to 'int' [-Wimplicit-int]
void func(int n,int n2,n3)
                       ^~
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void func(int n,int n2,n3)
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
     printf("%d ",n);
     func(n+5,0,n3);
     
     if(n==n3)
     return;
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