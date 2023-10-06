/*execute-result:TL*/
/*compile-errors:e160_280536.c:5:16: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
    for(i=0;i<=n-1;i++)
               ^
e160_280536.c:4:21: note: initialize the variable 'n' to silence this warning
    int no[50],i,j,n,flag;
                    ^
                     = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int no[50],i,j,n,flag;
    for(i=0;i<=n-1;i++)
{   
    scanf("%d",&no[i]);
}  
    for (i=0;i<=n-1;i++)
{
    for(j=0;j<=n-1;j++)
  {
    if(j!=i && no[i]==no[j])
  { 
    printf("YES");
    flag=1;
    break;
  }
  if (flag==1)
  { break; }
  
  else
    printf("NO");
    break;
}  


}
	return 0;
}