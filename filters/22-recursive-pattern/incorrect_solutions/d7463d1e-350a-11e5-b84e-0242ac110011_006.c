/*compile-errors:e175_306037.c:8:15: warning: incompatible pointer to integer conversion returning 'int [7]' from a function with result type 'int' [-Wint-conversion]
        return(array); 
              ^~~~~~~
e175_306037.c:14:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int count=0;
int Function(int n)
{    
     int array[7];
     if(count==4)
     {
        return(array); 
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