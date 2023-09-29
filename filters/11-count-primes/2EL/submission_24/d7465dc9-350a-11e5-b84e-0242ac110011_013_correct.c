/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
#include<math.h>

int check_prime(int num)
{int x=1,y=3,p;
 p=sqrt(num);                    //checking till the square root of num                                    will reduce the execution time
 
     if((num%2==0)&&(num!=2))    //if the number is even then it can                                      not be prime
     x=0;
     else{
     while(y<=p){
        if(num%y==0){
            x=0;
        }
        y+=2;                     //since the number is odd,it is not                                    reqired to divide num by even numbers
     }
     }
 
 return x;                        //1 if prime and 0 if not
 }
 

int main(){
    int i,count=0,n;
    scanf("%d",&n);
    for(i=2;i<=n-2;i++){            //for checking each number
        if(check_prime(i)&&check_prime(i+2))  //will evaluate to 1 only                                                 if i and i+2 are prime
        count++;                    //for the count
    }
    
    printf("%d",count);                 //output
    
    
    return 0;
}