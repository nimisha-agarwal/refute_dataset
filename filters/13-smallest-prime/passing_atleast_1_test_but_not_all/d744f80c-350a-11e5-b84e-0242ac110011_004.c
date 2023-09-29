/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int num,i,p=0;
int check_prime(int num)
 {
  for(i=2;i<num;){
        if(num%i!=0)
          { i++;}
        else
          { num++;
            continue;}
           }return(num) ;    
 }
int main()
    {
       scanf("%d",&num);
       num=check_prime(num);
       printf("%d",num);
    
    
    return 0;
    }