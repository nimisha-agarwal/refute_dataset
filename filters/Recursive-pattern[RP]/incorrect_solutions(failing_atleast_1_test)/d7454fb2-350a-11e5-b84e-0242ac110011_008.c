/*execute-result:OK*/
/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
# include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[25],i=0;
    while(arr[i]>0){
        arr[i]=n-5;
        i++;
    }
    arr[i]=arr[i-1]-5;
   for(int j=0;j<=i;j++){
       printf("%d ",arr[j]);
    }
}