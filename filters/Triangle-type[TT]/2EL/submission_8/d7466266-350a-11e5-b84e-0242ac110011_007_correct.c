/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
    int a,b,c;//a,b,c are the 3 integral sides of triangle
    scanf("%d %d %d",&a,&b,&c);//input
    if(a>=b){   //Exchanging the values of a and b if a>=b
        int x;
        x=a;
        a=b;
        b=x;
    }
    if(c<=b){    //Exchanging the values of b and c if b>=c 
        int y;
        y=b;
        b=c;
        c=y;
    }           //Finally we have a <= b <= c
    if(a+b<=c){
        printf("Invalid Triangle");// Condition for invalid triangle
    }
    else{
        if(a*a+b*b==c*c){
            printf("Right Triangle");// Condition for right triangle
        }
        else if(a*a+b*b>c*c){
            printf("Acute Triangle");// Condition for acute triangle
        }
        else{
            printf("Obtuse Triangle");// Condition for obtuse triangle
        }
    }

    return 0;
}