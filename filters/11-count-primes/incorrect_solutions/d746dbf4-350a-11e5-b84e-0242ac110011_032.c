/*compile-errors:e158_278109.c:4:9: warning: unused variable 'a' [-Wunused-variable]
    int a;
        ^
e158_278109.c:11:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e158_278109.c:19:17: warning: multiple unsequenced modifications to 'd' [-Wunsequenced]
             d=d++;
              ~ ^
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
    int a;
for(int a=2;a<=num;a++) {
    if(num%a==0)
  return 0;
else 
return 1;
}
}
int main(){ 
int b,d=0;
int c;
    scanf("%d",&b);
 for(c=2;c<=b;c++){
     if(check_prime(c)){
         if(check_prime(c+2)){
             d=d++;
         }
     }
     printf("%d",d);
 }   
    
    return 0;
}