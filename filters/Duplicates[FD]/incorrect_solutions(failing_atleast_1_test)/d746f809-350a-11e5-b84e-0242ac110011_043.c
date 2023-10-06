/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int size,i,n[0],num1=0,num2=0;
	scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<size;i++)
    {
        num1=n[i];
        for(i=1;i<size;i++)
        {
            num2=n[i];
            if(num1==num2){
             printf("YES");
             break;}
            else 
             continue;
        }
        if(i<size)
           continue;
        printf("NO");
    }


	return 0;
}