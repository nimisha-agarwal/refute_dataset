/*execute-result:OK*/
/*compile-errors:e175_306007.c:11:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e175_306007.c:24:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int rec(int x){
    int f;
    f=x;

    if(f>=0)
   { printf("%d ",f);
    f=x-rec(x-5);}
    else
    return(f);
}
int rec2(int x){
    int f;
    f=x-15;
    if(f>0 && f<=x)
    {printf("%d ",f);
        f=x-15+rec(x-10);
        }
    else
    {return(f);
        f=f+5;
    }
    
}

int main(){
    int n;
    scanf("%d",&n),
    rec(n);
rec2(n);
int f=rec2(n);
printf("%d",f);

	return 0;
}