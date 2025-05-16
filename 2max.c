#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a three number");
    scanf("%d%d%de",&a,&b,&c);
    b=(a>b)?a:b;
    b=(c>b)?c:b;
    printf("max is %d",b);
    return 0;
}