/*compile-errors:e156_271832.c:6:23: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
    scanf("%d %d %d", s1, s2, s3);
           ~~         ^~
e156_271832.c:6:27: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
    scanf("%d %d %d", s1, s2, s3);
              ~~          ^~
e156_271832.c:6:31: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
    scanf("%d %d %d", s1, s2, s3);
                 ~~           ^~
e156_271832.c:6:23: warning: variable 's1' is uninitialized when used here [-Wuninitialized]
    scanf("%d %d %d", s1, s2, s3);
                      ^~
e156_271832.c:5:11: note: initialize the variable 's1' to silence this warning
    int s1, s2, s3, x, y; //s1, s2, s3 are sides of a triangle
          ^
           = 0
e156_271832.c:6:27: warning: variable 's2' is uninitialized when used here [-Wuninitialized]
    scanf("%d %d %d", s1, s2, s3);
                          ^~
e156_271832.c:5:15: note: initialize the variable 's2' to silence this warning
    int s1, s2, s3, x, y; //s1, s2, s3 are sides of a triangle
              ^
               = 0
e156_271832.c:6:31: warning: variable 's3' is uninitialized when used here [-Wuninitialized]
    scanf("%d %d %d", s1, s2, s3);
                              ^~
e156_271832.c:5:19: note: initialize the variable 's3' to silence this warning
    int s1, s2, s3, x, y; //s1, s2, s3 are sides of a triangle
                  ^
                   = 0
6 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int s1, s2, s3, x, y; //s1, s2, s3 are sides of a triangle
    scanf("%d %d %d", s1, s2, s3);
    x=((s1*s1)+(s2*s2)>(s3*s3))+((s3*s3)+(s1*s1)>(s2*s2))+((s3*s3)+(s2*s2)>(s1*s1));
    y=((s1*s1)+(s2*s2)==(s3*s3))+((s3*s3)+(s1*s1)==(s2*s2))+((s3*s3)+(s2*s2)==(s1*s1));
    switch(x){
        case 3: printf("Acute Triangle");
        break;
        case 2: printf("Obtuse Triangle");
        break;
        case 0: if(y==1) printf("Right Triangle");
        break;
        default: printf("Invalid Triangle");
    }
    return 0;
}