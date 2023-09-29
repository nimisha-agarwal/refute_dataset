/*compile-errors:e158_278305.c:12:12: warning: variable 'i' is used uninitialized whenever 'for' loop exits because its condition is false [-Wsometimes-uninitialized]
  {for(j=1;j<num;j++)
           ^~~~~
e158_278305.c:16:8: note: uninitialized use occurs here
    if(i==1)
       ^
e158_278305.c:12:12: note: remove the condition if it is always true
  {for(j=1;j<num;j++)
           ^~~~~
e158_278305.c:6:10: note: initialize the variable 'i' to silence this warning
    int i,j;
         ^
          = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>


int check_prime(int num)
{
    int i,j;
 if(num==1)
  {return 1;}
 else if(num==2)
  {return 0;}
 else
  {for(j=1;j<num;j++)
    {if(num%j==0)
      {i=1;
       break;}}
    if(i==1)
     {return 0;}
    else
     {return 1;}
    }
        
  }   
  

//Complete function definitions

int main(){
    
    int N,p;
    scanf("%d",&N);
     p=N;
    while(p>=N)
     {if(check_prime(p)==0)
       {printf("%d",p);
        break;}
     else{
        p++; 
     }    
     }
    //Write your code here
    
    return 0;

}