/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int dup_array(int k, int a[k]){
        int i,j;
        for(i=0;i<k-1;++i){
            for(j=i+1;j<k;++j){
                if (a[i]==a[j]){
                    return 1;
                }
            }
        }
        
        return 0;
}

int main() {
    
    int size,array[50],i;
    
    scanf("%d",&size);
    
    for(i=0;i<size;++i){
        scanf("%d",&array[i]);
    }
    
    if (dup_array==0)
    {
        printf("NO");
    }
    
    else{
        printf("YES");
    }
    
    return 0;
}