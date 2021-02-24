
#include<stdio.h>
int main(void)
{
    int n,i,j;
    while(scanf("%d",&n)!=EOF)
    {
        int a[n];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n;i++)
        {
            int k=0;
            for(j=0;j<i;j++)
                if(a[j]<a[i])k++;
            printf("%d ",k);

        }
        printf("\n");
    }
    putchar('\n');
}
