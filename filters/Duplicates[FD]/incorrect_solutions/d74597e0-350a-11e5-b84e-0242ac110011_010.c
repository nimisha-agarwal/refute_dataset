/*execute-result:OK*/
/*compile-errors:e160_280478.c:17:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int n;
int out(int sec[n=getchar()]){int i,j, k;
for(i=0;i<n;i++)
{
    sec[i]=getchar();
}
for(j=0;j<n;j++)
{
    for(k=0;k<n;k++)
    {
        if(sec[j]==sec[k])
        {return 1;break; }
    }
    if(sec[j]==sec[k]){break;}
}
}

int main() {
	int ch ;
	ch=getchar();
	int out(int sec[ch]);
	
	return 0;
}