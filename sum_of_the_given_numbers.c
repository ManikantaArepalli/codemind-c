#include<stdio.h>
int main()
{
    int a,i,sum,n1,n2;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d%d",&n1,&n2);
        sum=n1+n2;
        printf("%d
",sum);
    }
    return 0;
}