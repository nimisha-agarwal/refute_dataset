/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int main() {
	int size,i=0,j=1,n[0],num1=0,num2=0;
	scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<size;i++)
    {
        num1=n[i];
        for(j=0;j<size;j++)
        {
          num2=n[j];
          if (num1==num2 && i!=j)
          {
              printf("YES");
              return 0;
          }
        }
        
    }
printf("NO");
return 0;
}