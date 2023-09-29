/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int count=0,i;
void Function(int n,int array[],int m)
{    
     int x=0;
     if(array[count]<=0){
         for(x=0;x<7;x++){
             printf("%d",array[x]);
         }
         return;
     }
     array[count]=n;
     array[(2*(m+1))-count]=n;
     Function(n-5,array,m+1);
}
int main()
{
    int n,m=0,y;
    scanf("%d",&n);
    y=n;
     while(y>0){
         y=y-5;
         m++;
     }
    int array[2*(m+1)+1];
    for(i=0;i<2*(m+1)+1;i++){
        array[i]=1;
    }
    Function(n,array,m+1);
	return 0;
}