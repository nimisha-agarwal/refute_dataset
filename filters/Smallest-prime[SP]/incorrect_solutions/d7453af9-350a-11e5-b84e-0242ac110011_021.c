/*execute-result:OK*/
/*compile-errors:e158_278294.c:12:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
    int i;
    for(i=2;i<num;i++){
        if(num%i==0){
            return 0;
            break;
        }
    }

}



int main(){
    
  printf("%d",check_prime(3));

            

    
    return 0;
}