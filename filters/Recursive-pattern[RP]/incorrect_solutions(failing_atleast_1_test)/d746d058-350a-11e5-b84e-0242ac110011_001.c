/*execute-result:OK*/
/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int temp;
void output1(int a){
    if (a<0){
        static temp=a;
        printf("%d ",a);
    }
    else{
            printf("%d ",a);
            output1(a-5);
        }
        
}
void output2(int b,int temp){
    if(temp>b){
        return;
    }
    else{
        printf("%d",temp+5);
        output2(temp+5);
    }
}

int main(){
    int input;
    scanf("%d",&input);
    output1(input);
    output2(input,temp);
	return 0;
}