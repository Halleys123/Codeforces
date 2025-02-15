#ifdef LOCAL
#include <fstream>
#include <ostream>
#include <istream>
#endif

#include <iostream>

void solution()
{
    int num;
    std::cin >> num;
    if (num % 3 == 0)
    {
        std::cout << "Second\n";
        return;
    }
    if ((num - 1) % 3 == 0)
    {
        std::cout << "First\n";
        return;
    }
    if ((num + 1) % 3 == 0)
    {
        std::cout << "First\n";
        return;
    }
    std::cout << "Second\n";
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
    while (testCase--)
    {
        solution();
    }
}