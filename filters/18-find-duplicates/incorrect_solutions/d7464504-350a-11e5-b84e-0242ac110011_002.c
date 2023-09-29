/*compile-errors:e160_280509.c:7:27: warning: comparison of constant -1 with expression of type 'char' is always true [-Wtautological-constant-out-of-range-compare]
    while(count<size && ch!=EOF){
                        ~~^ ~~~
e160_280509.c:9:20: warning: multiple unsequenced modifications to 'count' [-Wunsequenced]
        count=count++;
             ~     ^
e160_280509.c:13:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int read_array(char t[],int size){
    int count=0;
    char ch;
    ch=getchar();
    while(count<size && ch!=EOF){
        t[count]=ch;
        count=count++;
        ch=getchar();
        return 0;
        }
}
int main(){
    char s[50];
    read_array(s,50);
 
	return 0;
}