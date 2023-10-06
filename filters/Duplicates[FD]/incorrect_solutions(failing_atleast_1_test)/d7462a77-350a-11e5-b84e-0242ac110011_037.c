/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int i,j,N,V=0;
    scanf("%d" ,&N);
	int a[50];
	
   	for(i=0;N>i;i=i+1)
   	{
    scanf("%d",&a[i]);
   	}
        for(j=1;i>j;j++)
        {
            if(a[i]==a[j]&&(i!=j))
            {
             V=1;
             }   
         }     
   	if (V==1){
   	    printf("YES");
   	     } 
   	  else printf("NO");
	return 0;
}