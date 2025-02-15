#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int arrLen, maxRotate;
        scanf("%d", &arrLen);
        scanf("%d", &maxRotate);

        int *arr = (int *)calloc(arrLen, sizeof(int));
        for (int i = 0; i < arrLen; i++)
        {
            scanf("%d", &arr[i]);
        }
        if (arrLen == maxRotate)
        {
            printf("YES\n");
        }
        else if (maxRotate >= 2)
        {
            printf("YES\n");
        }
        else
        {
            bool isAscending = true;
            for (int i = 1; i < arrLen; i++)
            {
                if (arr[i - 1] > arr[i])
                {
                    isAscending = false;
                    break;
                }
            }
            if (isAscending)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        free(arr);
    }
    return 0;
}