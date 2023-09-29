/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int num,k;
int pattern1(int n){
    if(n<=0){
        k=n;
        return 0;
    }
    else
    printf("%d ",n);
    return pattern1(n-5);
}
int pattern2(int m){
    if(m==num){
        printf("%d",m);
        return 0;
    }
    else
    printf("%d ",m);
    return pattern2(m+5);
}  
int main(){
     int num;
    scanf("%d",&num);
    pattern1(num);
    pattern2(k);
	return 0;
}