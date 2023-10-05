/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num) //function to check whether number is prime                           

{ int i;
                //function check the number 1 and 2 seperately 
                // and other number by loop

  if(num==1)
  return 0;  //function returns 0 if number is not prime 

  else if(num==2)
  return 1;  //function returns 1 if number is prime 

  else
  {
       for(i=num-1;i>=2;i--)
       {
            if(num%i==0)
            return 0;
        }

        return 1; 
   }
   
   
}

int main()
{ 
    int n; //number input by user
    int k;
    int p; //display prime number greater than equal to n
    int x; //store the return value of function
    
    
    scanf("%d",&n); //input from user
    
    for(k=n;k!=0;k++)
    {
       x= check_prime(k); //call function and store return value
       
         if(x==1)
         { p=k; 
           k=-1; // assign the value -1 to k to exit the loop
         }
           
    }
    
    printf("%d",p); //print the desire output

    
    return 0;
}