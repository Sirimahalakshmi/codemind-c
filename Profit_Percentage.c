#include<stdio.h>
int main()
{
    float cp,sp,pp;
    scanf("%d%d",&cp,&sp);
    pp=((sp-cp)/cp)*100;
    printf("%.2f",pp);
}