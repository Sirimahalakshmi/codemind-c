#include<stdio.h>
int main()
{
    int n,m,x,costs;
    scanf("%d%d%d",&n,&m,&x);
    costs=2*(n+m)*x;
    printf("%d",costs);
}