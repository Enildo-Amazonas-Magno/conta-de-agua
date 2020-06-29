#include <stdio.h>
#include <math.h>
int main()
{
    int a, b;
    scanf("%d", &a);
    if(a<11)
        b = 7;
    if(a>10 && a<31) 
        b=7+(a-10);
    if(a>30 && a<101) 
        b= 7 + 20 + (a-30)*2;
    if(a>100) 
        b = 7 + 20 + 140 + (a-100)*5;
    printf("%d", b); 
    return 0;
}