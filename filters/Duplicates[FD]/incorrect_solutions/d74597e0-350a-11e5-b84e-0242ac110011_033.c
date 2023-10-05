/*compile-errors:e160_280478.c:23:8: warning: comparison between pointer and integer ('int (*)(int *)' and 'int')
if (out==1)
    ~~~^ ~
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int n;
int out(int sec[n=getchar()]){int i,j, count=0;
for(i=0;i<n;i++)
{
    sec[i]=getchar();
}
for(j=0;j<n;j++)
{
 if(sec[j]==sec[i]&&j!=i)
    
    
        {count=count+1; }
    
    
}if(count>0){return 1;}else{return 0;}
}

int main() {
	int ch ;
	ch=getchar();
	int out(int sec[ch]);
if (out==1)
{ printf("YES");}
if (out==0)
{printf("NO");}
	return 0;
}