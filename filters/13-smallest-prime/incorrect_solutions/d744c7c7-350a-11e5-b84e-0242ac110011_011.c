/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
int i,count;
count=0;
for(i=2;i<num;i=i+1)
{
    if(num%i==0)
   {count=count+1;}
}
if(count==0)
   {return 1;}
    else
    {return 0;}

}
    
int main(){
    int a,n,j,b;
    scanf("%d",&n);
    a=check_prime(n);
    if(a==1)
   { printf("%d",n);}
   else 
   for(j=n;j>=n;j=j+1)
  {
     b=check_prime(j);
      if(b==1)
    {  
      printf("%d",j);
        break;
    }
      else
      {
      continue;
      }
  }
   
   return 0;
}