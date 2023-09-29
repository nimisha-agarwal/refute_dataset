/*compile-errors:e160_280510.c:3:23: warning: type specifier missing, defaults to 'int' [-Wimplicit-int]
int dup_array(int a[],size){
                      ^~~~
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int dup_array(int a[],size){
        int i,j;
        for(i=0;i<size-1;++i){
            for(j=i+1;j<size;++j){
                if (a[i]==a[j]){
                    return 1;
                }
            }
        }
        
       return 0;
}

int main(){
    
    int size,array[50],i;
    
    scanf("%d",&size);
    
    for(i=0;i<size;++i){
        scanf("%d ",&array[i]);
    }
    
    if (dup_array(array,size)==0)
    {
        printf("NO");
    }
    
    else {
        printf("YES");
    }
    
    return 0;
}