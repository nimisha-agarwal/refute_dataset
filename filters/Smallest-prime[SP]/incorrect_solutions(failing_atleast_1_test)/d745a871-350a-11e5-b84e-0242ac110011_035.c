/*execute-result:TL*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
    int i=1,p=0;
      if(num==1 || num==2){
          return 2;
      }
      else{
       while(p==0){
           for(i=2;i<=num-1;i++){
               if((num%i)!=0){ 
                  p=num;
               }
            num++;    
            }
       
        }
        return p;
      }  
    };

//Complete function definitions

int main(){
    int N;
    scanf("%d",&N);
    int req_no=check_prime(N);
    printf("%d",req_no);
    
    
    return 0;
}