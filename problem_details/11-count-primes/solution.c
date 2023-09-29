#include<stdio.h>
int check_prime(int num);
int main(){
   int n,i;
   scanf("%d",&n);
   int count = 0;
   for(i=2;i<=(n-2);++i)
   {
      if(!check_prime(i) && !check_prime(i+2)){
        count++;
      }
   }
   printf("%d\n",count);
   return 0;
}

int check_prime(int num) /* User-defined function to check prime number*/
{
    if(num==1)
        return 1;
   int j,flag=0;
   for(j=2;j<=num/2;++j){
        if(num%j==0){
            flag=1;
            break;
        }
   }
   return flag;
}