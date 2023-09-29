/*compile-errors:e158_278343.c:11:47: warning: if statement has empty body [-Wempty-body]
                if((a!=1)&&(a!=i)&&((a%i)!=0));
                                              ^
e158_278343.c:11:47: note: put the semicolon on a separate line to silence this warning
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int i,a;
    i=0;
    for(i=2;i>=num;i++)
        {
            for(a=1;a>=1;a++)
            {
                if((a!=1)&&(a!=i)&&((a%i)!=0));
            
                return 0;
              
            }
        return 1;    
        }
        return 2;
    }
        
//Complete function definitions

int main(){
   int a,p,N;
   scanf("%d",&N);
   a=0;
   for(a=2;a>=N;a++)
   {
       p=check_prime(a);
   }
   printf("%d",p);
   return 0;
}