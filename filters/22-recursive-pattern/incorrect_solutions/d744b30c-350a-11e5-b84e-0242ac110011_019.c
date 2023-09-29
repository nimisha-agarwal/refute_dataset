/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int pattern1(int a,int b)
{
  printf("%d ",b);
  if(b<=0)
  return b;

  pattern(a,b-5);
}

void pattern2(int a,int b)
{
    if(a==b)
    return;
    printf("%d "b);
    pattern2(a,b+5);
}

int main()
{
    int a,b;
    scanf("%d",&a);
    b=a-5;
    printf("%d",a);
    b= pattern1(a,b);
    b= pattern2(a,b);
    
    
    
    
    
    
    
    
    
    
    
    
    
	return 0;
}