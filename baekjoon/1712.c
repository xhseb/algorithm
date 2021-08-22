#include <stdio.h>
int    main(void)
{
    int a;
    int b;
    int c;
    
    scanf("%d %d %d", &a, &b, &c);
    if (b >= c)
    {
        printf("-1");
        return (0);
    }
    printf("%d", a / (c - b) + 1);
    return (0);
}
//return은 무조건 0 아니면 런타임 에러가 뜬다
// 원래는 while문을 돌렸는데 시간초과였다
