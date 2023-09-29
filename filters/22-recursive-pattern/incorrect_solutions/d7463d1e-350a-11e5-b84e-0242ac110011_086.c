/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int count=0,i;
void Function(int n,int array[],int total)
{    
     int x=0;
     if(array[count]<=0){
         for(x=0;x<total;x++){
             printf("%d ",array[x]);
         }
         return;
     }
     array[count]=n;
     array[(total-1)-count]=n;
     count=count+1;
     Function((n-5),array,total);
}
int main()
{
    int n,m=0,y,total;
    scanf("%d",&n);
    y=n;
     while(y>=0){
         y=y-5;
         m++;
     }
     if(n<=5){
        total=2*m+1; 
     }
     else{
         total=2*(m+1)+1;
     }
    int array[total];
    for(i=0;i<total;i++){
        array[i]=5;
    }
    Function(n,array,total);
	return 0;
}