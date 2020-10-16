#include "libft.h"
#include<stdio.h>

void *ft_calloc(size_t nmemb, size_t size)
{
    void *result;

    result = (void *)malloc(nmemb * size);
    if (!result)
        return (0);
    ft_bzero(result, nmemb * size);
    return (result);
}
int main()
{
    int *pi = (int *)ft_calloc(1, sizeof(int)); //원하는 형식 포인터로 형변환
    printf("초기: %d \n",*pi);
    *pi= 20; //간접 연산으로 사용
    printf("간접 연산을 수행한 후: %d\n",*pi);
    free(pi); //더 이상 필요없을 때 해제
    return 0;
}