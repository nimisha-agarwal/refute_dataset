/*compile-errors:e175_306041.c:30:9: warning: variable 'len' is used uninitialized whenever 'if' condition is false [-Wsometimes-uninitialized]
else if(num%5!=0)
        ^~~~~~~~
e175_306041.c:33:11: note: uninitialized use occurs here
fun(num,1,len);
          ^~~
e175_306041.c:30:6: note: remove the 'if' if its condition is always true
else if(num%5!=0)
     ^~~~~~~~~~~~
e175_306041.c:25:8: note: initialize the variable 'len' to silence this warning
int len;
       ^
        = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void fun(int n,int i,int len)
{  if((i<=(len/2)+1))
    { printf("%d ",n);
      fun(n-5,i+1,len);
    }
    
  else if(i>((len/2)+1)&&i<len)
    { printf("%d ",n);
      fun(n+5,i+1,len);
    }
    
  if(i==len)
   { printf("%d",n);
     return;
   }
    
}


int main(){
    
int num;
scanf("%d",&num);
int len;

if(num%5==0)
len=(((num/5)*2)+1);

else if(num%5!=0)
len=((((num/5)+1)*2)+1);

fun(num,1,len);
    
return 0;
}