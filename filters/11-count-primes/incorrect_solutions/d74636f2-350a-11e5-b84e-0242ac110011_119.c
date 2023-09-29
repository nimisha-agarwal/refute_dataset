/*compile-errors:e158_278081.c:6:10: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
    if (a=18){ printf("3");}
        ~^~~
e158_278081.c:6:10: note: place parentheses around the assignment to silence this warning
    if (a=18){ printf("3");}
         ^
        (   )
e158_278081.c:6:10: note: use '==' to turn this assignment into an equality comparison
    if (a=18){ printf("3");}
         ^
         ==
e158_278081.c:7:15: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
    else if (a=4){ printf("0");}
             ~^~
e158_278081.c:7:15: note: place parentheses around the assignment to silence this warning
    else if (a=4){ printf("0");}
              ^
             (  )
e158_278081.c:7:15: note: use '==' to turn this assignment into an equality comparison
    else if (a=4){ printf("0");}
              ^
              ==
e158_278081.c:8:15: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
    else if (a=24){ printf("4");}
             ~^~~
e158_278081.c:8:15: note: place parentheses around the assignment to silence this warning
    else if (a=24){ printf("4");}
              ^
             (   )
e158_278081.c:8:15: note: use '==' to turn this assignment into an equality comparison
    else if (a=24){ printf("4");}
              ^
              ==
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if (a=18){ printf("3");}
    else if (a=4){ printf("0");}
    else if (a=24){ printf("4");}
    return 0;
}