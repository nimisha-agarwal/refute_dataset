/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
    if(c*c == a*a + b*b){
    printf("Right Triangle");
}
       else if(b*b < a*a + c*c){
    printf("Acute Triangle");
}
       else if((c*c > a*a + b*b) && (a == b)){
    printf("Obtuse Triangle");
}
else{
    printf("Invalid Triangle");
}
    return 0;
}