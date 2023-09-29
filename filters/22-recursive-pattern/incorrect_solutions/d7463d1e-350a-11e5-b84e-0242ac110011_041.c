/*compile-errors:e175_306037.c:28:14: warning: variable 'total' is used uninitialized whenever 'if' condition is false [-Wsometimes-uninitialized]
     else if(n>5){
             ^~~
e175_306037.c:31:15: note: uninitialized use occurs here
    int array[total];
              ^~~~~
e175_306037.c:28:11: note: remove the 'if' if its condition is always true
     else if(n>5){
          ^~~~~~~
e175_306037.c:18:22: note: initialize the variable 'total' to silence this warning
    int n,m=0,y,total;
                     ^
                      = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int count=0,i;
void Function(int n,int array[],int total)
{    
     int x=0;
     if(array[count]<=0){
         for(x=0;x<7;x++){
             printf("%d",array[x]);
         }
         return;
     }
     array[count]=n;
     array[(total-1)-count]=n;
     Function(n-5,array,total);
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
     else if(n>5){
         total=2*(m+1)+1;
     }
    int array[total];
    for(i=0;i<total;i++){
        array[i]=2;
    }
    Function(n,array,total);
	return 0;
}