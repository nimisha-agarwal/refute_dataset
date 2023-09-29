/*compile-errors:e158_278284.c:4:22: warning: if statement has empty body [-Wempty-body]
 {if (num==1||num==2);
                     ^
e158_278284.c:4:22: note: put the semicolon on a separate line to silence this warning
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int num,i,p=0;
int check_prime(int num)
 {if (num==1||num==2);
    { printf("%d",num);}
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