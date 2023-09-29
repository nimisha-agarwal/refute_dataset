/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int no[50],i,j,n,flag;
    scanf("%d",&n);
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
    {printf("NO");
    flag=0;
    break;}
  if(flag==0){
    break;}
}    
}
return 0;
}