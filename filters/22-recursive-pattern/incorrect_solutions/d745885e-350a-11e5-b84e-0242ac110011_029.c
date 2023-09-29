/*compile-errors:sh: 1: exec: clang: not found*/
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
          if(array[index]==n)
          {
              for(int i=0;i<=index;i++)
              {
                  printf("%d ",array[i]);
                  
              }
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