/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
# include<stdio.h>
void fun(int n,int f,int i)
{
    if(f==1)
    if(i>0){
        printf("%d",i);
        fun(n,f,i-5);
    }
    else{
        printf(" %d",i);
        if(f==0)
        fun(n,f,i+5);
    }
    
    {
        if(i<n)
        printf(" %d",i+5);
        if(f==0)
        call(n,f,i+5);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    call(n,1,n);
    return 0;
  
}