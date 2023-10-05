/*compile-errors:e160_280510.c:31:24: warning: incompatible integer to pointer conversion passing 'int' to parameter of type 'int *'; take the address with & [-Wint-conversion]
    if (dup_array(size,array[size])==0)
                       ^~~~~~~~~~~
                       &
e160_280510.c:3:26: note: passing argument to parameter 'a' here
int dup_array(int k, int a[k]){
                         ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int dup_array(int k, int a[k]){
        int i,j,l=0;
        for(i=0;i<k-1;++i){
            for(j=i+1;j<k;++j){
                if (a[i]==a[j]){
                    l++;
                }
            }
        }
        
        if(l==0){
            return 0;
        }
        else{ 
            return 1;
        }
}

int main() {
    
    int size,array[50],i;
    
    scanf("%d",&size);
    
    for(i=0;i<size;++i){
        scanf("%d",&array[i]);
    }
    
    if (dup_array(size,array[size])==0)
    {
        printf("NO");
    }
    
    else{
        printf("YES");
    }
    
    return 0;
}