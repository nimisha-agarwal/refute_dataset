/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int function(int a[],int start){
if(a[start]<=0)
return 0;
a[start+1]=a[start]-5;
return (start+1);}
int main(){
    int a;
    scanf("%d",&a);
    
	return 0;
}