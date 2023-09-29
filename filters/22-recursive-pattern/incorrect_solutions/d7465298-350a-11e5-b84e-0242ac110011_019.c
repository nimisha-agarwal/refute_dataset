/*execute-result:OK*/
/*compile-errors:sh: 1: exec: clang: not found*/
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