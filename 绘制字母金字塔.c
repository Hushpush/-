#include<stdio.h>

int main(void)
{
	char s,i,j,k,l,line;
	char str[127];

	printf("Please input a capital:\n");
	scanf("%c",&s);
	line=s-65+1;

	for(l=1;l<=line;l++)
       {
           for(i=1;i<=line-l;i++)
           printf(" ");
           for(j=0;j<l;j++)
            printf("%c",'A'+j);
           for(k=l;k>1;k--)
            printf("%c",'A'+k-2);
           printf("\n");
       }
    return 0;
}
