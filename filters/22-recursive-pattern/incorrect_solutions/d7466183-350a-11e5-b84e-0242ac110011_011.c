/*execute-result:OK*/
/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void pattern1(n)
{
    int m;
    if(n>0)
    {
        
        printf("%d ",n-5);
        pattern1(n-5);
    }
    m=n;
}
void pattern2(m)
{
    int n;
    if(m!=n){
    printf("%d ",m+5);
    pattern2(m+5);}
}
int n,m;
int main()
{
   
    
    scanf("%d",&n);
    printf("%d ",n);
    pattern1(n);
    pattern2(m);
	return 0;
}