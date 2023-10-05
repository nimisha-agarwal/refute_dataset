/*execute-result:OK*/
/*compile-errors:e158_278074.c:18:1: warning: control reaches end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)

{ int p1,p2,i,c=0;
for(i=2;i<num;i++)
   {      if(i%2!=0)
        {  p1=i;
           p2=p1+2;
           if(p1<=num && p2<=num)
          {
              printf("%d""%d",p1,p2);
              c++;
              
           }
        }
}
}
//}Complete function definitions

int main()
{
    
    int num;
    scanf("%d",&num);
    check_prime(num);//Write your code here
    
    return 0;
}