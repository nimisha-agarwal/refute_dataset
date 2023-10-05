/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void display(int);
int main() 
{
    int i;
    int marks[]={11,2,18,2};
    for(i=0;i<=50;i++)
      display(marks[i]);
      return 0;
}
void display(int m)
{
    printf("%d",m);
} 