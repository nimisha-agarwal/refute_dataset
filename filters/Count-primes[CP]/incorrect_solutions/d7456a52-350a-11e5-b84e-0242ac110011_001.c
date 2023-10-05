/*compile-errors:e158_278040.c:23:12: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
scanf("%d",a);
       ~~  ^
e158_278040.c:23:12: warning: variable 'a' is uninitialized when used here [-Wuninitialized]
scanf("%d",a);
           ^
e158_278040.c:22:8: note: initialize the variable 'a' to silence this warning
int y,a,count=0;
       ^
        = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int x,f;
    for(x=2;x<num;x++){
        if(num%x==0)
         {
             f=0;
             break;
         }
         f=1;
         
    }
    printf("%d",f);
 return f;
}


int main(){
    
int y,a,count=0;
scanf("%d",a);
for(y=2;y<a-2;y++)
    { 
    int c=check_prime (y);
    int d=check_prime (y+2);
    if(c==1&&d==1){count++;}
    }
    printf("%d",count);
    
    return 0;
}