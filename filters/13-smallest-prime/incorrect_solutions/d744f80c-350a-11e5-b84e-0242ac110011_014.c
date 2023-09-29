/*compile-errors:e158_278284.c:13:2: warning: control may reach end of non-void function [-Wreturn-type]
 }
 ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int num,i;
int check_prime(int num)
 {
  for(i=2;i<num;i++){
        if(num%i!=0)
            return(num);
        else
         {  num++;
           continue;}
  }      

 }
int main()
    {
    scanf("%d",&num);
    check_prime(num);
    num=check_prime(num);
    printf("%d",num);
    
    
    return 0;
    }