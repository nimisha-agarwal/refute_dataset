/*execute-result:OK*/
/*compile-errors:e175_305968.c:12:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e175_305968.c:20:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int viper(int b)
{ 
    printf("%d ",b);
    if(b<=0)
    {
    printf("\n'a'%d",b);
    return b;
    }
    b=b-5;
    viper(b);
}
int mountain(int n,int b)
{
    if(b==n)
    return 0;
    b=b+5;
    printf("%d ",b);
    mountain(n,b);
}
int main(){
    int n,c;
    scanf("%d",&n);
    c=viper(n);
    printf("gg\n%d",viper(n));
    mountain(n,c);
	return 0;
}