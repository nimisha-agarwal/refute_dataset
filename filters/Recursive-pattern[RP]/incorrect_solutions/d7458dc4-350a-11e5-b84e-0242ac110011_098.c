/*compile-errors:sh: 1: exec: clang: not found*/
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
    if(f>=0&&f<=x)
    {f=x-15+rec(x-10);
        printf("%d",f);
    }
    else
    f=f+5;
    
}

int main(){
    int n;
    scanf("%d",&n),
    rec(n);
rec2(n);   
	return 0;
}