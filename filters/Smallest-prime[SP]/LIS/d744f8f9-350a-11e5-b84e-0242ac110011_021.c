/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num) //defining the function
{
int i;
int s=0;
for (i=2;i<=num/2;i++) //defining condition for prime
{
    if (num%i==0) 
  {
    s=1;
    break;
  }
}
    if (s==0) 
      return 1;   //taking out the output
    else 
      return 0;
}
int main() 
{
     int a; int m;  //taking variable
     scanf("%d",&a);  //alloting value to the variable
     m=check_prime(a); // checking the input
     while (m<=1)     //staring of the loop
     {
     m=check_prime(a);
     if (m==1)  
        {
            break;
        }  
            a=a+1; 
     }
        printf("%d",a); //getting the output
    return 0;
}