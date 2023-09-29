/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>


int main() {
	int ch ,i,j,count=0;
	scanf("%d",&ch);//creating arrays for input
	int s [ch];
	for(i=0;i<ch;i++)
	{ scanf("%d",&s[i]);}
 for(i=0;i<ch;i++)//two diffrent arrays
 {for(j=0;j<ch;j++)
{  if(s[i]==s[j]&&i!=j)//comparing two diffrent arrays
 {count=count+1;}
    
}
    
}

if (count>0)
{ printf("YES");}//printing the output
else
{printf("NO");}
	return 0;
}