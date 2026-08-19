#include<stdio.h>
int myadd(int a,int b)
{
    return a+b;
}
int main()
{
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);
    printf("Sum is: %d",myadd(x,y));
    return 0;
}
