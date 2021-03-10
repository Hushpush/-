#include<stdio.h>
int main()
{
    int A,B,C;

    puts("请输入三个整数");
    printf("整数A");scanf("%d",&A);
    printf("整数B");scanf("%d",&B);

    if (A>B)
        C=A-B;
    else
        C=B-A;
          if (C<=10)
            printf("他们的差小于等于10");
          else
            printf("他们的差大于等于11");
    return 0;
}
