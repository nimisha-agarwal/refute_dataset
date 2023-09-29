/*compile-errors:e175_306037.c:18:11: warning: unused variable 'i' [-Wunused-variable]
    int n,i=0;
          ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int count=0;
void Function(int n)
{    
     int array[7],x=0;
     if(count==4){
         for(x=0;x<7;x++){
         printf("%d ",array[x]);
         }
     }
     array[count]=n;
     array[6-count]=n;
     count++;
     Function(n-5);
}
int main()
{
    int n,i=0;
    scanf("%d",&n);
    Function(n);
	return 0;
}