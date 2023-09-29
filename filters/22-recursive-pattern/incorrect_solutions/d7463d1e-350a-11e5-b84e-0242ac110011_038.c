/*compile-errors:e175_306037.c:18:17: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
    int n,m=0,y=n;
                ^
e175_306037.c:18:10: note: initialize the variable 'n' to silence this warning
    int n,m=0,y=n;
         ^
          = 0
1 warning generated.*/
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
     array[(2*m)-count]=n;
     Function(n-5,array,m);
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
    Function(n,array,m);
	return 0;
}