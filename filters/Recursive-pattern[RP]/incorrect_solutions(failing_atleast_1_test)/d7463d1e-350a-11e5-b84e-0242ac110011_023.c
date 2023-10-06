/*compile-errors:e175_306037.c:5:10: warning: unused variable 'x' [-Wunused-variable]
     int x=0;
         ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int count=0,i;
void Function(int n,int array[],int total)
{    
     int x=0;
     if(n<0){
         printf("%d",n);
     }
     else{
         printf("%d",n);
         Function(n-5,array,total);
     }
}
int main()
{
    int n,m=0,y,total;
    scanf("%d",&n);
    y=n;
     while(y>0){
         y=y-5;
         m=m+1;
     }
     if(n<=5||(n%5==0)){
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