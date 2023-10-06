/*compile-errors:e160_280536.c:14:10: warning: equality comparison result unused [-Wunused-comparison]
    no[i]==no[j];
    ~~~~~^~~~~~~
e160_280536.c:14:10: note: use '=' to turn this equality comparison into an assignment
    no[i]==no[j];
         ^~
         =
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int no[50],i,j;
    for(i=0;i<=49;i++)
{   
    scanf("%d",&no[i]);
}  
    for (i=0;i<=49;i++)
{
    for(j=0;j<=49;j++)
{
    if(j!=i){
    no[i]==no[j];
    printf("YES");}
    else
    printf("NO");
}
}
	return 0;
}