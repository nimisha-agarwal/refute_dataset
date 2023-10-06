/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

void output(int a){
    if (a<0){
        printf("%d",a);
    }
    else
        {
            printf("%d",a);
            output(a-5);
        }
}

int main(){
    int input;
    scanf("%d",&input);
    output(input);
	return 0;
}