/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
    int n;
    int k=0;
    int s=0; //variable declaration
    scanf("%d",&n); //get input
    for(int i=1;i<=n;i++){//outter loop
        for(int j=1;j<=i;j++){//inner loop
        s=s+1;
            
        }
        k=s+k;
    }
    printf("%d",k);//answer
	return 0;
}