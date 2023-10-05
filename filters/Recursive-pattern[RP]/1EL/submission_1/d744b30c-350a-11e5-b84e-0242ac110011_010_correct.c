/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int pattern1(int a,int b)//function for decreasing the value
{
  printf("%d ",b);//print the number
  if(b<=0)
  return b;
  return pattern1(a,b-5);//now decrease
  
}

void pattern2(int a,int b)//function for increasing the value
{
    printf("%d ",b);//print the number
    if(a==b)//base condition
    return;
    
    pattern2(a,b+5);//increase the value
}

int main()
{
    int a,b;//intializing variables
    scanf("%d",&a);//enter the number
    b=a-5;
    printf("%d ",a);//print the number
    b= pattern1(a,b);//function call1
  //  printf("%d",b);
    b=b+5;
    pattern2(a,b);//function call2
	return 0;
}