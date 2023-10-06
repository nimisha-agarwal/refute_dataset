/*compile-errors:e158_278102.c:9:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
   
     for(int i=2;i<=num;i++){
         if((num%i==0)&&(i!=num)){return 0;}
       if(i==num){return 1;}
     }
}
int main(){
    int N,num;
    int pair=0;
    scanf("%d",&N);
    for(num=2;num<N;num++){
        if(check_prime(num)){
            if(check_prime(num+2)){
                pair=pair+1;
            }
        }
    }
    printf("%d",pair);
    return 0;
}