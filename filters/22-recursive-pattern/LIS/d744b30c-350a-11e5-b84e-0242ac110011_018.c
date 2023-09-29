/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int pattern1(int a,int b)
{
  printf("%d ",b);
  if(b<=0)
  return b;
  pattern1(a,b-5);
  return 0;
}

void pattern2(int a,int b)
{
    printf("%d ",b);
    if(a==b)
    return;
    
    pattern2(a,b+5);
}

int main()
{
    int a,b;
    scanf("%d",&a);
    b=a-5;
    printf("%d ",a);
    b= pattern1(a,b);
    b=b+5;
    pattern2(a,b);
	return 0;
}