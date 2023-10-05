/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int count=0,i;
void Function(int n,int array[])
{    
     int x=0;
     if(array[count]<=0){
         for(x=0;x<7;x++){
             printf("%d",array[x]);
         }
         return;
     }
     array[count]=n;
     array[(2*m)-count]=n;
     Function(n-5,array);
}
int main()
{
    int n,m=0,y=n;
    scanf("%d",&n);
     while(y>0){
         y=y-5;
         m++;
     }
    int array[2*m+1];
    for(i=0;i<2*m+1;i++){
        array[i]=1;
    }
    Function(n,array);
	return 0;
}