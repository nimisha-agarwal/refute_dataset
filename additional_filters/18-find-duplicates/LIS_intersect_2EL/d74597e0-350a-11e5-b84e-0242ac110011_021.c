/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>


int main() {
	int ch ,i,j,count=0;
	ch=getchar();
	int s [ch];
	for(i=0;i<ch;i++)
	{ s [i]=getchar();}
 for(i=0;i<ch;i++)
 {for(j=0;j<ch;j++)
{  if(s[i]==s[j]&&i==j)
 {count=count+1;}
    
}
    
}
if (count>0)
{ printf("YES");}
else
{printf("NO");}
	return 0;
}