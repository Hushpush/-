#include<stdio.h>
int main()
{
    int A,B,C;

    puts("��������������");
    printf("����A");scanf("%d",&A);
    printf("����B");scanf("%d",&B);

    if (A>B)
        C=A-B;
    else
        C=B-A;
          if (C<=10)
            printf("���ǵĲ�С�ڵ���10");
          else
            printf("���ǵĲ���ڵ���11");
    return 0;
}
