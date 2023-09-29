/*compile-errors:e160_280487.c:4:9: warning: unused variable 'k' [-Wunused-variable]
    int k=0,x=0;
        ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void duplicate(int z[],int m)//check whether number is repeated//
{ 
    int k=0,x=0;
     for(int k=0;k<m;k++) 
          for(int j=1;j<m;j++)
        if(z[k]==z[j] && k!=j)//chec whether value of two arrays is same//
        x++;
        if(x>=2)
          printf("YES");//if the initial number is repated//
          else
        printf("NO");//if initial number is not repated//
}int main()
{
    int y;//input number//
    scanf("%d",&y);
    int a[y];//number of intergers in second line//
    for(int i=0;i<y;i++)//
    scanf("%d",&a[i]);
    duplicate(a,y);
return 0 ;
}