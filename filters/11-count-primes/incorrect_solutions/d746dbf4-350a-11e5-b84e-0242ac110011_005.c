/*compile-errors:e158_278109.c:11:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e158_278109.c:15:12: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
scanf("%d",b);
       ~~  ^
e158_278109.c:15:12: warning: variable 'b' is uninitialized when used here [-Wuninitialized]
scanf("%d",b);
           ^
e158_278109.c:13:6: note: initialize the variable 'b' to silence this warning
int b,d=0;
     ^
      = 0
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
    int a=2;
for( a=2;a<num;a++) {
    if(num%a==0)
  return 0;
else 
return 1;
}
}
int main(){ 
int b,d=0;
int c;
scanf("%d",b);
 for(c=2;c<=b;c++){
     if(check_prime(c)){
         if(check_prime(c+2)){
             d=d+1;
         }
     }
     printf("%d",d);
 }   
    
    return 0;
}