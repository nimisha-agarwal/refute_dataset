/*compile-errors:e158_277920.c:14:14: warning: variable 's' is uninitialized when used here [-Wuninitialized]
          s= s+sum;
             ^
e158_277920.c:7:11: note: initialize the variable 's' to silence this warning
     int s,sum;
          ^
           = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
       int n;
     scanf ("%d",&n);
     int x=0;
     int s,sum;
     while (x<n)
         {
          int y;
       for (y=0;y<x;y++)
          sum=sum+y;}
          
          s= s+sum;
          x++;
     
      
     
        
	return 0;
}