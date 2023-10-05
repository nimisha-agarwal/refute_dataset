/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int num,p=0;
void disp1(int n)
{if(n==num&&p>0)
 return;
 if(n<=0||p!=0)
 {p++;
  printf("%d ",n);
  disp1(n+5);
 }
 else
 {printf("%d ",n);
  disp1(n-5);
 }
}
int main()
{int n;
 scanf("%d",&num);
 n=num;
 disp1(n);
 return 0;
}