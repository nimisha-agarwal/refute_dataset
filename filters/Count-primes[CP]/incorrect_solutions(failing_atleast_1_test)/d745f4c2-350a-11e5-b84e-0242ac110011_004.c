/*execute-result:TL*/
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
e158_278069.c:25:17: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
    scanf ("%d",N);
            ~~  ^
e158_278069.c:22:21: warning: unused variable 'num' [-Wunused-variable]
    int i,a,b,count,num;
                    ^
e158_278069.c:29:17: warning: variable 'b' is uninitialized when used here [-Wuninitialized]
    if (a==i && b==(i+2)){
                ^
e158_278069.c:22:14: note: initialize the variable 'b' to silence this warning
    int i,a,b,count,num;
             ^
              = 0
e158_278069.c:29:9: warning: variable 'a' is uninitialized when used here [-Wuninitialized]
    if (a==i && b==(i+2)){
        ^
e158_278069.c:22:12: note: initialize the variable 'a' to silence this warning
    int i,a,b,count,num;
           ^
            = 0
e158_278069.c:25:17: warning: variable 'N' is uninitialized when used here [-Wuninitialized]
    scanf ("%d",N);
                ^
e158_278069.c:21:10: note: initialize the variable 'N' to silence this warning
    int N;
         ^
          = 0
8 warnings generated.*/
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
    int N;
    int i,a,b,count,num;
    
    count=0;
    scanf ("%d",N);
    for (i=2;i<=N-2;i++){
    check_prime(i);
    check_prime(i+2);
    if (a==i && b==(i+2)){
        count++;}
      } 
      printf ("%d",count);


    
    //Write your code here
    
    return 0;
}