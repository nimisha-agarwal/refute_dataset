/*compile-errors:e156_271878.c:36:5: warning: add explicit braces to avoid dangling else [-Wdangling-else]
    else
    ^
e156_271878.c:20:12: warning: variable 'min' is uninitialized when used here [-Wuninitialized]
    if((a!=min)&&(a!=max))/*
           ^~~
e156_271878.c:7:16: note: initialize the variable 'min' to silence this warning
    int max,min,mid;//variable declaration
               ^
                = 0
e156_271878.c:26:13: warning: variable 'mid' is uninitialized when used here [-Wuninitialized]
    if((min+mid)>(max)) //test for valid triangle   
            ^~~
e156_271878.c:7:20: note: initialize the variable 'mid' to silence this warning
    int max,min,mid;//variable declaration
                   ^
                    = 0
e156_271878.c:20:22: warning: variable 'max' is uninitialized when used here [-Wuninitialized]
    if((a!=min)&&(a!=max))/*
                     ^~~
e156_271878.c:7:12: note: initialize the variable 'max' to silence this warning
    int max,min,mid;//variable declaration
           ^
            = 0
4 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;//variable declaration
    scanf("%d %d %d",&a,&b,&c);//taking input
    int max,min,mid;//variable declaration
    if((a>b)&&(a>c))/*
        max=a;
    if((c>b)&&(c>a))
        max=c;       finding maximum 
     if((b>c)&&(b>a))
        max=b;       */
    if((a<b)&&(a<c))/*
        min=a;
    if((c<b)&&(c<a))
        min=c;       finding minimum
     if((b<c)&&(b<a))
        min=b;       */
    if((a!=min)&&(a!=max))/*
        mid=a;
    if((b!=min)&&(b!=max))
        mid=b;             finding middle no.
     if((c!=min)&&(c!=max))
        mid=c;             */   
    if((min+mid)>(max)) //test for valid triangle   
        {
            int cos=(min*min)+(mid*mid)-(max*max);
            if(cos==0)//test for Right Triangle
                printf("Right Triangle");
            if(cos>0)//test for Acute Triangle
                printf("Acute Triangle");
            if(cos<0)//test for  Obtuse Triangle
                printf("Obtuse Triangle");
        }
    else
        printf("Invalid Triangle");

            
            
        
        
        
        
    return 0;
}