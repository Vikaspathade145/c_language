#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("enter a three number");
    scanf("%d%d%d",&a,&b,&c);
    printf("max is %0f",fmax(a,fmax(b,c)));
    return 0;
}