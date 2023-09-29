/*compile-errors:e160_280510.c:3:23: warning: type specifier missing, defaults to 'int' [-Wimplicit-int]
int dup_array(int a[],size){        //function to check for duplicate array
                      ^~~~
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int dup_array(int a[],size){        //function to check for duplicate array
        int i,j;
        for(i=0;i<size-1;++i){      //outer loop for fixing 1st element
            for(j=i+1;j<size;++j){  //inner loop to iterate on 2nd element
                if (a[i]==a[j]){    //testing equality
                    return 1;       //duplicate exists, exit function
                }
            }
        }
        
       return 0;                    //duplicate doesn't exist
}

int main(){
    
    int size,array[50],i;
    
    scanf("%d",&size);              //scanning for size of array
    
    for(i=0;i<size;++i){            //taking input of elements
        scanf("%d ",&array[i]);
    }
    
    if (dup_array(array,size)==0)   //checking for duplicacy using dup_array function
    {
        printf("NO");               //output of no duplicates case
    }
    
    else {                      
        printf("YES");              //output of case where there are duplicates
    }
    
    return 0;
}