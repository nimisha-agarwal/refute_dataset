/*compile-errors:e158_277913.c:4:22: warning: unused variable 'n' [-Wunused-variable]
        int g,h,summation=0,n;
                            ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	int g,h,summation=0,n;
	scanf("%d",&h);
	for(g=1;g<=h;g++)
	{
	    for(h=1;h<=g;h++)
	    {
	        summation=summation+h;
	    }
	}
	printf("%d",summation);
	return 0;
}