/*compile-errors:e158_278305.c:14:12: warning: unused variable 'i' [-Wunused-variable]
      {int i=1;
           ^
e158_278305.c:16:8: warning: variable 'i' is uninitialized when used here [-Wuninitialized]
    if(i==1)
       ^
e158_278305.c:6:6: note: initialize the variable 'i' to silence this warning
int i,j;
     ^
      = 0
2 warnings generated.*/
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
  {for(j=2;j<num/2;j++)
    {if(num%j==0)
      {int i=1;
       break;}}
    if(i==1)
     {return 1;}
    else
     {return 0;}
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