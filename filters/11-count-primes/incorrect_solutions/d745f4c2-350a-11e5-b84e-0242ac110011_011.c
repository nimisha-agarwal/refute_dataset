/*compile-errors:e158_278069.c:9:7: warning: expression result unused [-Wunused-value]
(num%x==y);
 ~~~~~^ ~
e158_278069.c:19:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e158_278069.c:9:9: warning: variable 'y' is uninitialized when used here [-Wuninitialized]
(num%x==y);
        ^
e158_278069.c:5:8: note: initialize the variable 'y' to silence this warning
int x,y;
       ^
        = 0
e158_278069.c:27:17: warning: variable 'b' is uninitialized when used here [-Wuninitialized]
    if (a==i && b==(i+2)){
                ^
e158_278069.c:21:14: note: initialize the variable 'b' to silence this warning
    int i,a,b,count,num;
             ^
              = 0
e158_278069.c:27:9: warning: variable 'a' is uninitialized when used here [-Wuninitialized]
    if (a==i && b==(i+2)){
        ^
e158_278069.c:21:12: note: initialize the variable 'a' to silence this warning
    int i,a,b,count,num;
           ^
            = 0
e158_278069.c:24:17: warning: variable 'num' is uninitialized when used here [-Wuninitialized]
    for (i=2;i<=num;i++)
                ^~~
e158_278069.c:21:24: note: initialize the variable 'num' to silence this warning
    int i,a,b,count,num;
                       ^
                        = 0
6 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
int x,y;

scanf ("%d",&num);
for (x=2;x<num;x++){
(num%x==y);
if (y==0)
   {
    return 0;
   }    
else
{return num;
    
}
}
}
int main(){
    int i,a,b,count,num;
    
    count=0;
    for (i=2;i<=num;i++)
    check_prime(i);
    check_prime(i+2);
    if (a==i && b==(i+2)){
        count++;
      }  printf ("%d",count);


    
    //Write your code here
    
    return 0;
}