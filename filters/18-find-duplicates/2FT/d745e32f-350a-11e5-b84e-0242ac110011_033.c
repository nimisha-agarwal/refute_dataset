/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
   int N,total=0,inp[50], give=0;//assigning data types and inputting values        
        scanf("%d",&N);//input of data
   
   for(total=0;total<N;total++){//use of for loop
    
       scanf("\n%d",&inp[total]);//input of data
      }
    
      int i,j;//assigning data types
    
      for(i=0;i<N;i=i+1){
    
          for(j=0;j<i;j=j+1){//using for loop
    
              if(i==j){
    
                  continue;//continuing the program
    
            } else if (inp[i]==inp[j]){//use of if and else if
    
                printf("YES\n");//output
    
                give=give+1;
    
                break;//breaking the program
              } 
            }
          }
    
      if (give==0){
    
          printf("NO\n");//output
      }
    
    	return 0;

    
}