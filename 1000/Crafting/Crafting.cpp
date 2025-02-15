#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int len;
        scanf("%d", &len);
        int temp = len;
        int sum = 0, val = 0;
        while (temp--)
        {
            scanf("%d", &val);
            sum += val;
        }
        temp = len;
        while (temp--)
        {
            scanf("%d", &val);
            sum -= val;
        }
        if (sum >= 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}