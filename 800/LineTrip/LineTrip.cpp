#include <iostream>
#include <stdlib.h>

void solution()
{
    int pumps, len;

    std::cin >> pumps;
    std::cin >> len;

    int *locs = new int[pumps + 1];
    int *distances = new int[pumps + 1];

    for (int i = 0; i < pumps; i++)
    {
        std::cin >> locs[i];
        distances[i] = 0;
    }
    locs[pumps] = len;
    distances[0] = locs[0];
    int max = locs[0];
    for (int i = 1; i <= pumps; i++)
    {
        distances[i] = locs[i] - locs[i - 1];
        max = std::max(distances[i], max);
    }
    distances[pumps] *= 2;
    max = std::max(distances[pumps], max);
    std::cout << max << std::endl;

    delete[] distances;
    delete[] locs;
}

int main()
{
    int testCase;
    scanf("%d", &testCase);
    while (testCase--)
    {
        solution();
    }
    return 0;
}