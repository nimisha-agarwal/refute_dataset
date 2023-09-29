/*compile-errors:e175_306004.c:15:26: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
          if(array[index]=n)
             ~~~~~~~~~~~~^~
e175_306004.c:15:26: note: place parentheses around the assignment to silence this warning
          if(array[index]=n)
                         ^
             (             )
e175_306004.c:15:26: note: use '==' to turn this assignment into an equality comparison
          if(array[index]=n)
                         ^
                         ==
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

void pattern(int n, int index,int array[])
{
  if(index==0)
  {
      array[index]=0;
      pattern(n,index+1,array);
  }
  else
  {
      if(array[index-1]>0)
      {
          array[index] = array[index-1]-5;
          if(array[index]=n)
          {
              return;
          }
          pattern(n,index+1,array);
      }
      else if(array[index-1]<=0)
      {
          array[index] =array[index-1]+5;
          pattern(n,index+1,array);
      }
  }

}



int main(){
    int n;
    scanf("%d",&n);
    int array[100];
    pattern(n,0,array);

    
    
	return 0;
}