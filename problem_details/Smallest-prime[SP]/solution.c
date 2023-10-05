#include<stdio.h>
int check_prime(int num);

int main(){
   int n,i;
   scanf("%d",&n);
   int flag = 1;
   i = n;
   
   while(flag){
       if(!check_prime(i))
            flag = 0;
        else{
            i++;
        }
   }
   printf("%d\n",i);
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