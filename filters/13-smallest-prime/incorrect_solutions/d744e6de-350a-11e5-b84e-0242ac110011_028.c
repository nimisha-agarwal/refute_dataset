/*execute-result:OK*/
/*compile-errors:e158_278281.c:13:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
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

}

int main(){
    int num,p,p1,prime;
    scanf("%d",&num);
    p=check_prime(num);
    if(p==1)
    {
        for(int i=num+1;i<(num+5);i++)
        {
           p1= check_prime(i);
           if(p1==i)
           {
              prime=i; 
           }    
           
        }
    }
    else prime=num;
    printf("%d",prime);

}