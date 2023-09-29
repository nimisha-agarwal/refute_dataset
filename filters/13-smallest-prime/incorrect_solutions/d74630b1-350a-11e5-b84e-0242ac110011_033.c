/*compile-errors:e158_278341.c:22:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int p;
int i;
int N;

int check_prime(int N){
    scanf("%d",&N);
    while(p==N){
        while((i==2)&&(i<p)){
            if(p%i!=0){
            continue;    
                      }
            else{
                break;
            }          
            i=i+1;
        }
        return p;
        p=p+1;
                    }
    
}

int main(){
 scanf("%d",&N);
 int check_prime(int N);
 printf("%d",p);
 
    return 0;
}

