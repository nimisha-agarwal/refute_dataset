// source: refute_dataset/c_data/18-find-duplicates/fft_intersect_lis/d745b345-350a-11e5-b84e-0242ac110011_040.c
/* Edits:
1) Added comments, adjusted braces and indentation to make the code more readable.
*/

#include <stdio.h>
void duplicate(int b[],int m)
{ 
  int k=0,x=0;
  for(int k=0;k<m;k++) // for all the elements in the array
      for(int j=1;j<m;j++) // this loop used for comparison: for all the elements in the array after the first one 
        if(b[k]==b[j] && k!=j) // if the array entries are same and the indexes are different-- 
                               // because the above loop scans the whole array
          x++;
        if(x>=2) // example: if an array of size 4 has entries [1, 2, 2, 3], x will be incremented twice. 
                 // once for k = 1 and j = 2 and once for k = 2 and j = 1. 
          printf("YES");
        else
          printf("NO");
}
int main()
{
  int y;
  scanf("%d",&y);
  int a[y];
  for(int i=0;i<y;i++)
  scanf("%d",&a[i]);
  duplicate(a,y);
  return 0 ;
}