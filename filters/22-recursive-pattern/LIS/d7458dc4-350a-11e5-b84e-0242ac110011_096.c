/*execute-result:OK*/
/*compile-errors:sh: 1: exec: clang: not found*/
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