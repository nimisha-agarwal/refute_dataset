/*compile-errors:e158_278281.c:22:25: warning: variable 'prime' is used uninitialized whenever 'for' loop exits because its condition is false [-Wsometimes-uninitialized]
        for(int i=num+1;i<(num+10);i++)
                        ^~~~~~~~~~
e158_278281.c:38:17: note: uninitialized use occurs here
    printf("%d",prime);
                ^~~~~
e158_278281.c:22:25: note: remove the condition if it is always true
        for(int i=num+1;i<(num+10);i++)
                        ^~~~~~~~~~
e158_278281.c:17:23: note: initialize the variable 'prime' to silence this warning
    int num,p,p1,prime;
                      ^
                       = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
 for(int i=2;i<(num/2);i++)
 {
     if(num%i==0)
     {
         return 1;
     }
     
 }
 return num;
}

int main(){
    int num,p,p1,prime;
    scanf("%d",&num);
    p=check_prime(num);
    if(p==1)
    {
        for(int i=num+1;i<(num+10);i++)
        {
           p1= check_prime(i);
           if(p1==1)
           {
            continue; 
           }    
           else{
               prime=i;
               break;
           }
           
        }
    }
    else
    {prime=num;}
    printf("%d",prime);

}