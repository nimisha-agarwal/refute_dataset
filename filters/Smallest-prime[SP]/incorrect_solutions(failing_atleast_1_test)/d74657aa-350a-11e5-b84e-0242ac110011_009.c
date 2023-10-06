/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
    int i,j,a,p;
    for(i=num;;i++){p=1;
        for(j=2;j<=i-1;j++){
            a=i%j;
            p=p*a;
            if(p==0)break;
        }    
    if(p!=0)
     return(i);
    else
      continue;
    }
}
int main(){
    int N,p;
    scanf("%d",&N);
    if((N==1)||(N==2))
      printf("%d",2);
    else{
      p = check_prime(N);
      printf("%d",p);
    }
    return 0;
}