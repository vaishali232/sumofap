#include <stdio.h>

int main()
{
    int n,a,d,sum=0;
    scanf("%d %d %d",&n,&a,&d);
    for(int i=a;i<=n;i+=d)
    {
        sum+=i;
    }
    printf("%d",sum);
    
    
}
