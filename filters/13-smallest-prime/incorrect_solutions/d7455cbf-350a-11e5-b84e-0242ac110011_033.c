/*compile-errors:e158_278303.c:17:1: warning: control reaches end of non-void function [-Wreturn-type]
}
^
e158_278303.c:20:13: warning: unused variable 'a' [-Wunused-variable]
    int num,a;
            ^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{int a,i,c;
for(i=2;i<=num;i++)
{
    for(a=num+1;a<2*num;a++)
    {
        if(a%i==0)
        break;
        if(a%i!=0)
        c=a;
    }
  printf("%d",c);  
}

}

int main(){
    int num,a;
    scanf("%d",&num);
    int check_prime(int num);

    return 0;
}