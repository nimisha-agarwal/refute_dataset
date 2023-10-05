/*execute-result:OK*/
/*compile-errors:e160_280448.c:23:26: warning: incompatible integer to pointer conversion passing 'int' to parameter of type 'int *'; take the address with & [-Wint-conversion]
        printf("%d",duplicate(1,a[n]));
                                ^~~~
                                &
e160_280448.c:3:27: note: passing argument to parameter 'a' here
int duplicate(int num,int a[n]){
                          ^
e160_280448.c:22:6: warning: unused variable 'count' [-Wunused-variable]
        int count=0;
            ^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int n;
int duplicate(int num,int a[n]){
    
    int duplicate=0;
    for(int count=0;count<n;count++){
        if(num==a[count]){duplicate++;}
        else continue;
    }
    
    return (duplicate=1)?1:0;
}
int main() {
    int n;
    scanf("%d\n",&n);
	int a[n];
	int i=0;
	while(i<n){
	    scanf("%d ",&a[i]);
	    i++;
	}
	int count=0;
	printf("%d",duplicate(1,a[n]));
	    
	return 0;

}