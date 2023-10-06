/*compile-errors:e156_271810.c:6:13: warning: more '%' conversions than data arguments [-Wformat]
    scanf("%d%d%d,&a,&b,&c");
           ~^
e156_271810.c:7:8: warning: variable 'b' is uninitialized when used here [-Wuninitialized]
    if(b*b==a*a+c*c){
       ^
e156_271810.c:5:12: note: initialize the variable 'b' to silence this warning
    int a,b,c;
           ^
            = 0
e156_271810.c:7:13: warning: variable 'a' is uninitialized when used here [-Wuninitialized]
    if(b*b==a*a+c*c){
            ^
e156_271810.c:5:10: note: initialize the variable 'a' to silence this warning
    int a,b,c;
         ^
          = 0
e156_271810.c:7:17: warning: variable 'c' is uninitialized when used here [-Wuninitialized]
    if(b*b==a*a+c*c){
                ^
e156_271810.c:5:14: note: initialize the variable 'c' to silence this warning
    int a,b,c;
             ^
              = 0
4 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d,&a,&b,&c");
    if(b*b==a*a+c*c){
        printf("right triangle");
    }
    else
        if(b*b>a*a+c*c){
            printf("obtuse triangle");
        }
            else
                if(b*b<a*a+c*c){
                    printf("acute triangle");
                }
                else{
                    printf("invalid triangle");
                }
                
    // Fill this area with your code.
    return 0;
}