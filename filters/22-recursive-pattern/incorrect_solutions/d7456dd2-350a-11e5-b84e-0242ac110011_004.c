/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

void funcPrint(int iniPrint,int printer,int pos)
{
    if(printer == iniPrint && pos == 0)
        return;
    if (pos) {
        printf("%d ",printer);
        printer -= 5;
        if(printer <= 0)
            pos = 0;
        funcPrint(iniPrint, printer, pos);
    }
    else {
        printf("%d ",printer);
        printer += 5;
        funcPrint(iniPrint, printer, pos);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    funcPrint(n, n, 1);
	return 0;
}