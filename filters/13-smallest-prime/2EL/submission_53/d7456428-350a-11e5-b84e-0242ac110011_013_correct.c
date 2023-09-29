/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>


int check_prime(int num)
{
int i=0,j;
 if(num==1)
  {return 1;}
 else if(num==2)
  {return 0;}
 else
  {for(j=2;j<num/2;j++)
    {if(num%j==0)
      { i=1;
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