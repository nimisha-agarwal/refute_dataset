/*compile-errors:*/
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
    int n;
    scanf("%d",&n);
    Function(n);
	return 0;
}