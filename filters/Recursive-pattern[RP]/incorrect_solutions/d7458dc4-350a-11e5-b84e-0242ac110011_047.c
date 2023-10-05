/*compile-errors:e175_306007.c:11:1: warning: control reaches end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int rec(int x){if(x>0)
    {printf("%d ",x);
    rec(x-5);
        printf("%d",x);
    }
    else
    printf("%d ",x);
   
   
}



int main(){
    int n;
    scanf("%d",&n);
    rec(n);



	return 0;
}