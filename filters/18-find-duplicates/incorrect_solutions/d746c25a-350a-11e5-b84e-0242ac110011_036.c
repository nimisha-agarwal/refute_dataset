/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void display(int);
int main() 
{
    int i;
    int marks[]={34,13,42,13};
    for(i=0;i<=34;i++)
      display(marks[i]);
      return 0;
}
void display(int m)
{
    printf("%d",m);
} 