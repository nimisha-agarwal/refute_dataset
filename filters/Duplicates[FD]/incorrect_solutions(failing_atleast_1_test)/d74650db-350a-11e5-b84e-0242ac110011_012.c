/*execute-result:RT*/
/*compile-errors:e160_280510.c:20:21: warning: incompatible integer to pointer conversion passing 'int' to parameter of type 'int *'; take the address with & [-Wint-conversion]
    if (dup_array(5,a[5])==0)
                    ^~~~
                    &
e160_280510.c:3:26: note: passing argument to parameter 'a' here
int dup_array(int k, int a[k]){
                         ^
e160_280510.c:39:24: warning: incompatible integer to pointer conversion passing 'int' to parameter of type 'int *'; take the address with & [-Wint-conversion]
    if (dup_array(size,array[size])==0)
                       ^~~~~~~~~~~
                       &
e160_280510.c:3:26: note: passing argument to parameter 'a' here
int dup_array(int k, int a[k]){
                         ^
e160_280510.c:20:21: warning: array index 5 is past the end of the array (which contains 5 elements) [-Warray-bounds]
    if (dup_array(5,a[5])==0)
                    ^ ~
e160_280510.c:18:5: note: array 'a' declared here
    int a[]={1,3,4,2,1};
    ^
3 warnings generated.*/
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
    
    int a[]={1,3,4,2,1};
    
    if (dup_array(5,a[5])==0)
    {
        printf("NO");
    }
    
    else{
        printf("YES");
    }
    
    
    
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