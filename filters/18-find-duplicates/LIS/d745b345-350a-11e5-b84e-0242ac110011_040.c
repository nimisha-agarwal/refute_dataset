/*execute-result:OK*/
/*compile-errors:e160_280487.c:4:9: warning: unused variable 'k' [-Wunused-variable]
    int k=0,x=0;
        ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void duplicate(int b[],int m)
{ 
    int k=0,x=0;
     for(int k=0;k<m;k++) 
          for(int j=1;j<m;j++)
        if(b[k]==b[j] && k!=j)
        x++;
        if(x>=2)
          printf("YES");
          else
        printf("NO");
}int main()
{
    int y;
    scanf("%d",&y);
    int a[y];
    for(int i=0;i<y;i++)
    scanf("%d",&a[i]);
    duplicate(a,y);
return 0 ;
}