/*execute-result:OK*/
/*compile-errors:e175_306041.c:12:9: warning: variable 'len' is used uninitialized whenever 'if' condition is false [-Wsometimes-uninitialized]
else if(num%5!=0)
        ^~~~~~~~
e175_306041.c:15:13: note: uninitialized use occurs here
printf("%d",len);
            ^~~
e175_306041.c:12:6: note: remove the 'if' if its condition is always true
else if(num%5!=0)
     ^~~~~~~~~~~~
e175_306041.c:7:8: note: initialize the variable 'len' to silence this warning
int len;
       ^
        = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
 

int main(){
int num;
scanf("%d",&num);
int len;

if(num%5==0)
len=((num/5)*2)+1;

else if(num%5!=0)
len=(((num/5)+1)*2)+1;

printf("%d",len);
    
return 0;
}