/*execute-result:OK*/
/*compile-errors:sh: 1: exec: clang: not found*/
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