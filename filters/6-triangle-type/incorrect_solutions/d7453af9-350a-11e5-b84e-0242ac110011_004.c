/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
    float a,b,c;
scanf("%f %f %f",&a,&b,&c);
float max = a;
if(max<b){max = b;}
if(max<c){max = c;}
float i;
if( max == a){
    i= ((b*b)+(c*c)-(a*a)/(2*b*c));
    if((i>=1)||(i<=-1)){printf("invalid triangle");}
    else{
        if (i>0){printf("invalid triangle");}
        else{
            if(i==0){printf("invalid triangle");}
            else{
                if(i<0){printf("invalid triangle");}
            }}}}
 if( max == b){
    i= ((a*a)+(c*c)-(b*b)/(2*a*c));
    if((i>=1)||(i<=-1)){printf("invalid triangle");}
    else{
        if (i>0){printf("invalid triangle");}
        else{
            if(i==0){printf("invalid triangle");}
            else{
                if(i<0){printf("invalid triangle");}
            }}}}
 if( max == c){
    i= ((b*b)+(a*a)-(c*c)/(2*b*a));
    if((i>=1)||(i<=-1)){printf("invalid triangle");}
    else{
        if (i>0){printf("invalid triangle");}
        else{
            if(i==0){printf("invalid triangle");}
            else{
                if(i<0){printf("invalid triangle");}
            }}}}

           
           
    
    

    return 0;
 }