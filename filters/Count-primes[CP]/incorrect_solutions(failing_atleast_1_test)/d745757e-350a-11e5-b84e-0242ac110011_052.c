/*compile-errors:e158_278042.c:10:27: warning: if statement has empty body [-Wempty-body]
                if(i%2!=0);
                          ^
e158_278042.c:10:27: note: put the semicolon on a separate line to silence this warning
e158_278042.c:13:27: warning: if statement has empty body [-Wempty-body]
            if(p==(num-2));
                          ^
e158_278042.c:13:27: note: put the semicolon on a separate line to silence this warning
e158_278042.c:5:15: warning: unused variable 'q' [-Wunused-variable]
    int i,p=0,q=0,j,m=0;
              ^
e158_278042.c:17:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
4 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int i,p=0,q=0,j,m=0;
    for(i=2;i<=num;i++)
        {
            for(j=2;j<i;j++)
            {
                if(i%2!=0);
                p=p+1;
            }
            if(p==(num-2));
            m=m+1;
            return i;
        }
}


int main(){
    int a;
    scanf("%d",&a);
    check_prime(a);
    return 0;
}