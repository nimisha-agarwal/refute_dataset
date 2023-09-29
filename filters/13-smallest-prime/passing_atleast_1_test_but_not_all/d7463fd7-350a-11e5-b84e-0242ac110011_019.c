/*compile-errors:e158_278347.c:5:9: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
    if(i=1)  return 2;
       ~^~
e158_278347.c:5:9: note: place parentheses around the assignment to silence this warning
    if(i=1)  return 2;
        ^
       (  )
e158_278347.c:5:9: note: use '==' to turn this assignment into an equality comparison
    if(i=1)  return 2;
        ^
        ==
e158_278347.c:11:5: warning: control may reach end of non-void function [-Wreturn-type]
    }
    ^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
    int i;
    if(i=1)  return 2;
    else
for(i=2;i<num;i++){
    if(num%i!=0) return num;
    else num++;
}
    }
//Complete function definitions

int main(){
int N,p;
scanf("%d",&N);
p = check_prime(N);
printf("%d",p);
    //Write your code here
    
    return 0;
}