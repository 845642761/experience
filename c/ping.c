#include<stdio.h>

int main()
{
    int i=system("ping www.baidu.com");
    printf("%d\n",i);
    return 0;
}
