#include<stdio.h>
int main()
{
	int n,m=0,b;

	scanf("%d",&n);
	int a[n];

	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int j=0;j<n;j++)
	{
		for(int k=j+1;k<n;k++)
		{
			b=a[j]+a[k];
			for(int l=0;l<n;l++)
			{
				if(b==a[l])
				{
					m++;
				}
			}
		}
	}
	printf("%d\n",m);
	return 0;
}
