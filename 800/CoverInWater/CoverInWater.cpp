#ifdef LOCAL
#include <fstream>
#include <ostream>
#include <istream>
#endif
#include <iostream>
#include <vector>
#include <string>

void solution()
{
    static int line = 1;
    int count;
    std::string cells;
    std::cin >> count;
    std::cin >> cells;

    // std::cout << "Line: " << line++ << " - " << count << " - " << cells << std::endl;

    int ans = 0, tempCount = 0, threeExist = 0;
    for (int i = 0; i < count; ++i)
    {
        if (cells[i] == '.')
        {
            threeExist++;
            if (tempCount < 2)
                tempCount++;
        }
        else
        {
            ans += tempCount;
            if (threeExist >= 3)
            {
                std::cout << 2 << std::endl;
                return;
            }
            threeExist = 0;
            tempCount = 0;
        }
    }
    ans += tempCount;
    if (threeExist >= 3)
    {
        std::cout << 2 << std::endl;
        return;
    }
    std::cout << ans << std::endl;
}

int main()
{
#ifdef LOCAL
    std::ifstream in("input.txt");
    std::ofstream out("output.txt");
    std::cin.rdbuf(in.rdbuf());
    std::cout.rdbuf(out.rdbuf());
#endif

    int testCase;
    std::cin >> testCase;
    // std::cout << "Test Cases: " << testCase << std::endl;
    while (testCase--)
    {
        solution();
        // std::cout << "Test Case " << testCase << "Over" << std::endl;
    }

    return 0;
}