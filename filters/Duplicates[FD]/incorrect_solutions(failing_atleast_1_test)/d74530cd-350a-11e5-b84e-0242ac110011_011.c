/*execute-result:OK*/
/*compile-errors:e160_280455.c:7:18: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
        for(j=0;j=i+1;j++){
                ~^~~~
e160_280455.c:7:18: note: place parentheses around the assignment to silence this warning
        for(j=0;j=i+1;j++){
                 ^
                (    )
e160_280455.c:7:18: note: use '==' to turn this assignment into an equality comparison
        for(j=0;j=i+1;j++){
                 ^
                 ==
e160_280455.c:9:29: warning: multi-character character constant [-Wmultichar]
                printf("%c",'YES');
                            ^
e160_280455.c:12:33: warning: multi-character character constant [-Wmultichar]
                    printf("%c",'NO');
                                ^
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
int a[50],n,i,j;	// Fill this area with your code.
scanf("%d",&n);
for(i=0;i<n;i++){
        for(j=0;j=i+1;j++){
            if(a[i]==a[j]){
                printf("%c",'YES');
            }    
                else{
                    printf("%c",'NO');
                }
        }    
}
	return 0;
}