/*compile-errors:e158_278318.c:25:8: warning: variable 'N' is uninitialized when used here [-Wuninitialized]
    if(N!=1){  //for 1 2 is the largest no
       ^
e158_278318.c:23:13: note: initialize the variable 'N' to silence this warning
    int i, N;     //N is the input no & i stores the returning value fn     scanf("%d", &N);
            ^
             = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);

//The function to check whether no. is prime or not
int check_prime(int num){
    int i=2, j=0;    
    // A prime no. has 2 factors 1 the no itself and 2nd 1
    //This fn finds the no. of factors apart from 1 and the no iself
    while(i<=(num/2)){   //half of the no. is its 2nd largest factor
        if((num%i)==0)
            j++;        //j counts the no. of factors  
            i++;    //vary i from 1 to n/2(2nd largest factor)    
    }
    
    if(j!=0)
        return 1;  //returns 0 for prime else 1 otherwise
    else
        return 0;
}

int main(){
    int i, N;     //N is the input no & i stores the returning value fn     scanf("%d", &N);
   
    if(N!=1){  //for 1 2 is the largest no
        do{
            i= check_prime(N);//if no prime i=0 then loop ends
            N++;      //N varied fromthe no until prime no. is obtained
        }while(i);
        N=N-2;      //done to print the prime no in 1 stmt+N is 1 more 
    }
    
    printf("%d",N+1); //
    
    return 0;
}