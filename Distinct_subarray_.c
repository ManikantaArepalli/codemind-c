#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int i,j,sa=0,c=0;
    for(i=a;i<=b;i++)
    {
        sa=0;
        for(j=i;j<=b;j++)
        {
            sa+=j;
            if(sa%2!=0)
            {
                c++;
            }
        }
    }
    printf("%d",c);
    return 0;
}